// Class ReplicationOptimizer.FastReplicationInterface
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UFastReplicationInterface : UInterface {
};

// Class ReplicationOptimizer.RealReplicationGraph
// Size: 0x2cff6ac0 (Inherited: 0x2cff6aa0)
struct URealReplicationGraph : UReplicationGraph {
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x5f0(0x08)
	struct TArray<struct UObject*> SpatializedClasses; // 0x5f8(0x10)
	struct TArray<struct UObject*> NonSpatializedChildClasses; // 0x608(0x10)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x618(0x08)
	struct TArray<struct UObject*> ExplicitlySetClasses; // 0x960(0x10)
};

// Class ReplicationOptimizer.RealRepGraphNode_AlwaysRelevant_ForConnection
// Size: 0x2cff6a98 (Inherited: 0x2cff6a58)
struct URealRepGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	struct AActor* LastViewer; // 0x58(0x08)
	struct AActor* LastViewTarget; // 0x60(0x08)
	char pad_2CFF6A68[0x30]; // 0x2cff6a68(0x30)
};

// Class ReplicationOptimizer.RealRepGraphNode_PlayerStateFrequencyLimiter
// Size: 0x2cff6a88 (Inherited: 0x2cff6a58)
struct URealRepGraphNode_PlayerStateFrequencyLimiter : UReplicationGraphNode {
	char pad_2CFF6A58[0x30]; // 0x2cff6a58(0x30)
};

// Class ReplicationOptimizer.RealRepGraphNode_DormancyLimiter
// Size: 0x2cff6b20 (Inherited: 0x2cff6b20)
struct URealRepGraphNode_DormancyLimiter : UReplicationGraphNode_ActorList {
};

// Class ReplicationOptimizer.RealRepGraphNode_DormancyNode
// Size: 0x2cff6ac0 (Inherited: 0x2cff6a70)
struct URealRepGraphNode_DormancyNode : UReplicationGraphNode_DormancyNode {
	char pad_2CFF6A70[0x50]; // 0x2cff6a70(0x50)
};

// Class ReplicationOptimizer.RealRepGraphNode_ConnectionDormanyLimiter
// Size: 0x2cff6b08 (Inherited: 0x2cff6ae0)
struct URealRepGraphNode_ConnectionDormanyLimiter : UReplicationGraphNode_ConnectionDormancyNode {
	char pad_2CFF6AE0[0x28]; // 0x2cff6ae0(0x28)
};

// Class ReplicationOptimizer.RealRepGraphNode_ConnectionDormancyNode
// Size: 0x2cff6ae8 (Inherited: 0x2cff6ae0)
struct URealRepGraphNode_ConnectionDormancyNode : UReplicationGraphNode_ConnectionDormancyNode {
	char pad_2CFF6AE0[0x8]; // 0x2cff6ae0(0x08)
};

// Class ReplicationOptimizer.ReplicationPingComponet
// Size: 0x2cff6af0 (Inherited: 0x2cff6cb8)
struct UReplicationPingComponet : UActorComponent {
	int32_t PingCounter; // 0xb8(0x04)
	bool bEnabled; // 0xbc(0x01)
	struct APlayerState* PlayerState; // 0xc0(0x08)

	void ServerRPVPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ServerRPVPing // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1440660
	void ServerRPCPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ServerRPCPing // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x1440610
	void OnRep_Ping(); // Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Ping // (Final|Native|Private) // @ game+0x14405f0
	void OnRep_Enabled(); // Function ReplicationOptimizer.ReplicationPingComponet.OnRep_Enabled // (Final|Native|Private) // @ game+0x14405d0
	void ClientPing(); // Function ReplicationOptimizer.ReplicationPingComponet.ClientPing // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x14405b0
};

