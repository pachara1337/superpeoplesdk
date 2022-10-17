// Class ReplicationGraph.ReplicationGraph
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a30)
struct UReplicationGraph : UReplicationDriver {
	struct UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x30(0x08)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct TArray<struct UNetReplicationGraphConnection*> Connections; // 0x40(0x10)
	struct TArray<struct UNetReplicationGraphConnection*> PendingConnections; // 0x50(0x10)
	struct TArray<struct UReplicationGraphNode*> GlobalGraphNodes; // 0xa0(0x10)
	struct TArray<struct UReplicationGraphNode*> PrepareForReplicationNodes; // 0xb0(0x10)
	char pad_2CFF6A80[0x20]; // 0x2cff6a80(0x20)
};

// Class ReplicationGraph.ReplicationGraphNode
// Size: 0x2cff6a58 (Inherited: 0x2cff6930)
struct UReplicationGraphNode : UObject {
	struct TArray<struct UReplicationGraphNode*> AllChildNodes; // 0x30(0x10)
	char pad_2CFF6940[0x118]; // 0x2cff6940(0x118)
};

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// Size: 0x2cff6b20 (Inherited: 0x2cff6a58)
struct UReplicationGraphNode_ActorList : UReplicationGraphNode {
	char pad_2CFF6A58[0xc8]; // 0x2cff6a58(0xc8)
};

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// Size: 0x2cff6a70 (Inherited: 0x2cff6b20)
struct UReplicationGraphNode_DormancyNode : UReplicationGraphNode_ActorList {
};

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Size: 0x2cff6ae0 (Inherited: 0x2cff6b20)
struct UReplicationGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ActorList {
};

// Class ReplicationGraph.BasicReplicationGraph
// Size: 0x2cff6ad0 (Inherited: 0x2cff6aa0)
struct UBasicReplicationGraph : UReplicationGraph {
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x5a0(0x08)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x5a8(0x08)
	struct TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x5b0(0x10)
	struct TArray<struct AActor*> ActorsWithoutNetConnection; // 0x5c0(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Size: 0x2cff6a60 (Inherited: 0x2cff6a58)
struct UReplicationGraphNode_ActorListFrequencyBuckets : UReplicationGraphNode {
	char pad_2CFF6A58[0x8]; // 0x2cff6a58(0x08)
};

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Size: 0x2cff6a50 (Inherited: 0x2cff6b20)
struct UReplicationGraphNode_DynamicSpatialFrequency : UReplicationGraphNode_ActorList {
};

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// Size: 0x2cff6b00 (Inherited: 0x2cff6b20)
struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	struct UReplicationGraphNode* StaticNode; // 0x160(0x08)
	struct UReplicationGraphNode* DynamicNode; // 0x1f0(0x08)
	struct UReplicationGraphNode_DormancyNode* DormancyNode; // 0x1f8(0x08)
};

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Size: 0x2cff6a40 (Inherited: 0x2cff6a58)
struct UReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode {
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Size: 0x2cff6a70 (Inherited: 0x2cff6a58)
struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	struct UReplicationGraphNode* ChildNode; // 0x58(0x08)
	char pad_2CFF6A60[0x10]; // 0x2cff6a60(0x10)
};

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0x2cff6a58 (Inherited: 0x2cff6b20)
struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0x138(0x10)
	struct AActor* LastViewer; // 0x148(0x08)
	struct AActor* LastViewTarget; // 0x150(0x08)
};

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Size: 0x2cff6a80 (Inherited: 0x2cff6a58)
struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	struct TArray<struct FTearOffActorInfo> TearOffActors; // 0x58(0x10)
	char pad_2CFF6A68[0x18]; // 0x2cff6a68(0x18)
};

// Class ReplicationGraph.NetReplicationGraphConnection
// Size: 0x2cff6a58 (Inherited: 0x2cff6a30)
struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	struct UNetConnection* NetConnection; // 0x30(0x08)
	struct AReplicationGraphDebugActor* DebugActor; // 0x188(0x08)
	struct TArray<struct FLastLocationGatherInfo> LastGatherLocations; // 0x1a8(0x10)
	struct TArray<struct UReplicationGraphNode*> ConnectionGraphNodes; // 0x1c0(0x10)
	struct UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1d0(0x08)
};

// Class ReplicationGraph.ReplicationGraphDebugActor
// Size: 0x2cff6b18 (Inherited: 0x2cff6b08)
struct AReplicationGraphDebugActor : AActor {
	struct UReplicationGraph* ReplicationGraph; // 0x308(0x08)
	struct UNetReplicationGraphConnection* ConnectionManager; // 0x310(0x08)

	void ServerStopDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146aed0
	void ServerStartDebugging(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146aeb0
	void ServerSetPeriodFrameForClass(struct UObject* Class, int32_t PeriodFrame); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146ade0
	void ServerSetCullDistanceForClass(struct UObject* Class, float CullDistance); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146ad10
	void ServerSetConditionalActorBreakpoint(struct AActor* Actor); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146ac80
	void ServerPrintCullDistances(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146ac60
	void ServerPrintAllActorInfo(struct FString Str); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146abb0
	void ServerCellInfo(); // Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x146ab90
	void ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors); // Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x146aa50
};

