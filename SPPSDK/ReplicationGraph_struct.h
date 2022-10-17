// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// Size: 0x2cff6d10 (Inherited: 0x00)
struct FConnectionAlwaysRelevantNodePair {
	struct UNetConnection* NetConnection; // 0x00(0x08)
	struct UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x08(0x08)
	char pad_10[0x2cff6d00]; // 0x10(0x2cff6d00)
};

// ScriptStruct ReplicationGraph.LastLocationGatherInfo
// Size: 0x2cff6a20 (Inherited: 0x00)
struct FLastLocationGatherInfo {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct FVector LastLocation; // 0x08(0x0c)
	struct FVector LastOutOfRangeLocationCheck; // 0x14(0x0c)
	char pad_20[0x2cff6a00]; // 0x20(0x2cff6a00)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// Size: 0x2cffea18 (Inherited: 0x00)
struct FTearOffActorInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
	char pad_10[0x2cffea08]; // 0x10(0x2cffea08)
};

// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
// Size: 0x2cff6a18 (Inherited: 0x00)
struct FAlwaysRelevantActorInfo {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* LastViewer; // 0x08(0x08)
	struct AActor* LastViewTarget; // 0x10(0x08)
	char pad_18[0x2cff6a00]; // 0x18(0x2cff6a00)
};

