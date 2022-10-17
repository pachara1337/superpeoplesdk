// BlueprintGeneratedClass BP-ATV.BP-ATV_C
// Size: 0x2cff6ab0 (Inherited: 0x2cff6a68)
struct ABP-ATV_C : ABP-DefaultGroundVehicle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe68(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_RR; // 0xe70(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_RL; // 0xe78(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_FR; // 0xe80(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_FL; // 0xe88(0x08)
	struct UBravoHotelVehicleSeatCollisionComponent* VehicleSeatCollision1; // 0xe90(0x08)
	struct UBravoHotelVehicleSeatCollisionComponent* VehicleSeatCollision; // 0xe98(0x08)
	struct UBravoHotelVehicleSeatComponent* BravoHotelVehicleSeat02; // 0xea0(0x08)
	struct UMaterialInstanceDynamic* M-Vehicle_Spin; // 0xea8(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP-ATV.BP-ATV_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-ATV.BP-ATV_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-ATV(int32_t EntryPoint); // Function BP-ATV.BP-ATV_C.ExecuteUbergraph_BP-ATV // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

