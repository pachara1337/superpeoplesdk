// Class MagicLeapIdentity.MagicLeapIdentity
// Size: 0x2cff6a40 (Inherited: 0x2cff6930)
struct UMagicLeapIdentity : UObject {
	char pad_2CFF6930[0x110]; // 0x2cff6930(0x110)

	void RequestIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<struct FMagicLeapIdentityAttribute>& AttributeValue); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	enum class EMagicLeapIdentityError RequestAttributeValueAsync(struct TArray<enum class EMagicLeapIdentityKey>& RequestedAttributeList, struct FDelegate& ResultDelegate); // Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a94550
	enum class EMagicLeapIdentityError RequestAttributeValue(struct TArray<enum class EMagicLeapIdentityKey>& RequestedAttributeList, struct TArray<struct FMagicLeapIdentityAttribute>& RequestedAttributeValues); // Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a943f0
	void ModifyIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<enum class EMagicLeapIdentityKey>& AttributesUpdatedSuccessfully); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x2bad3b0
	void GetAllAvailableAttributesAsync(struct FDelegate& ResultDelegate); // Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a94330
	enum class EMagicLeapIdentityError GetAllAvailableAttributes(struct TArray<enum class EMagicLeapIdentityKey>& AvailableAttributes); // Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1a94270
	void AvailableIdentityAttributesDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, struct TArray<enum class EMagicLeapIdentityKey>& AvailableAttributes); // DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x2bad3b0
};

