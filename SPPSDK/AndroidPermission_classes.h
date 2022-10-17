// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x2cff6a50 (Inherited: 0x2cff6930)
struct UAndroidPermissionCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x30(0x10)
	char pad_2CFF6940[0x110]; // 0x2cff6940(0x110)
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x2cff6a30 (Inherited: 0x2cff6a30)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {

	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1a9d150
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1afb140
};

