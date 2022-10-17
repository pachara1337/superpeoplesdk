// BlueprintGeneratedClass BP-DestructibleActor.BP-DestructibleActor_C
// Size: 0x2cff6a49 (Inherited: 0x2cff6b20)
struct ABP-DestructibleActor_C : ADestructibleActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	float OpacityTime_Opacity_Percent_6C96418549465FDC90E47A873A3B4734; // 0x328(0x04)
	float OpacityTime_Opacity_6C96418549465FDC90E47A873A3B4734; // 0x32c(0x04)
	enum class ETimelineDirection OpacityTime__Direction_6C96418549465FDC90E47A873A3B4734; // 0x330(0x01)
	struct UTimelineComponent* OpacityTime; // 0x338(0x08)
	float Opacity; // 0x340(0x04)
	float DM_Opacity; // 0x344(0x04)
	bool Opacity_Bool; // 0x348(0x01)

	void OpacityTime__FinishedFunc(); // Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__FinishedFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void OpacityTime__UpdateFunc(); // Function BP-DestructibleActor.BP-DestructibleActor_C.OpacityTime__UpdateFunc // (BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-DestructibleActor.BP-DestructibleActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-DestructibleActor(int32_t EntryPoint); // Function BP-DestructibleActor.BP-DestructibleActor_C.ExecuteUbergraph_BP-DestructibleActor // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

