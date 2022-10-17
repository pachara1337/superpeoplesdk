// BlueprintGeneratedClass BP-MagazineBase.BP-MagazineBase_C
// Size: 0x2cff6a70 (Inherited: 0x2cff6a50)
struct ABP-MagazineBase_C : ABravoHotelMagazineForDrop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	float PhysicsSimulateTime; // 0x358(0x04)
	float LifeTime; // 0x35c(0x04)
	float AddImpulse; // 0x360(0x04)
	char Stance; // 0x364(0x01)
	float AddImpulse_Crouched; // 0x368(0x04)
	float AddImpulse_Proned; // 0x36c(0x04)
	char pad_2CFF6A6D[0x3]; // 0x2cff6a6d(0x03)

	void ReceiveBeginPlay(); // Function BP-MagazineBase.BP-MagazineBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-MagazineBase(int32_t EntryPoint); // Function BP-MagazineBase.BP-MagazineBase_C.ExecuteUbergraph_BP-MagazineBase // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

