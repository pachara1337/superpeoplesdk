// Class LocationServicesBPLibrary.LocationServices
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct ULocationServices : UBlueprintFunctionLibrary {

	bool StopLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StopLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b0c5c0
	bool StartLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StartLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b0c590
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy); // Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b0c510
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter); // Function LocationServicesBPLibrary.LocationServices.InitLocationServices // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b0c410
	struct ULocationServicesImpl* GetLocationServicesImpl(); // Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b0c3f0
	struct FLocationServicesData GetLastKnownLocation(); // Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b0c3b0
	bool AreLocationServicesEnabled(); // Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1b0c380
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct ULocationServicesImpl : UObject {
	struct FMulticastInlineDelegate OnLocationChanged; // 0x30(0x10)
	char pad_2CFF6940[0x100]; // 0x2cff6940(0x100)
};

