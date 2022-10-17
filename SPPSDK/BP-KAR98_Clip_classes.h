// BlueprintGeneratedClass BP-KAR98_Clip.BP-KAR98_Clip_C
// Size: 0x2cff6a80 (Inherited: 0x2cff6a50)
struct ABP-KAR98_Clip_C : ABravoHotelMagazineForDrop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	float PhysicsSimulateTime; // 0x358(0x04)
	float LifeTime; // 0x35c(0x04)
	float Left_Max; // 0x360(0x04)
	float Right_Max; // 0x364(0x04)
	float Impuls_Min; // 0x368(0x04)
	float Impuls_Max; // 0x36c(0x04)
	float Angle_Min; // 0x370(0x04)
	float Angle_Max; // 0x374(0x04)
	struct UStaticMesh* Clip_Mesh; // 0x378(0x08)

	void ReceiveBeginPlay(); // Function BP-KAR98_Clip.BP-KAR98_Clip_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-KAR98_Clip(int32_t EntryPoint); // Function BP-KAR98_Clip.BP-KAR98_Clip_C.ExecuteUbergraph_BP-KAR98_Clip // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

