// Enum BravoHotelCloudPlatform.AwsAuthFlowType
enum class AwsAuthFlowType : uint8 {
	NOT_SET = 0,
	USER_SRP_AUTH = 1,
	REFRESH_TOKEN_AUTH = 2,
	REFRESH_TOKEN = 3,
	CUSTOM_AUTH = 4,
	ADMIN_NO_SRP_AUTH = 5,
	USER_PASSWORD_AUTH = 6,
	ADMIN_USER_PASSWORD_AUTH = 7,
	AwsAuthFlowType_MAX = 8
};

// ScriptStruct BravoHotelCloudPlatform.AwsCredentialsInfo
// Size: 0x2cff6950 (Inherited: 0x00)
struct FAwsCredentialsInfo {
	struct FString AccessKeyId; // 0x00(0x10)
	struct FString SecretKey; // 0x10(0x10)
	struct FString SessionToken; // 0x20(0x10)
	double ExpirationTime; // 0x30(0x08)
	bool bTokenRequest; // 0x38(0x01)
	char pad_39[0x2cff6917]; // 0x39(0x2cff6917)
};

// ScriptStruct BravoHotelCloudPlatform.AwsKinesisObject
// Size: 0x2cff6930 (Inherited: 0x00)
struct FAwsKinesisObject {
	struct FString StreamName; // 0x00(0x10)
	struct FString Data; // 0x10(0x10)
	struct FString PartitionKey; // 0x20(0x10)
	char pad_30[0x2cff6900]; // 0x30(0x2cff6900)
};

// ScriptStruct BravoHotelCloudPlatform.AwsCredentialsForIdentityResponse
// Size: 0x2cff6c60 (Inherited: 0x00)
struct FAwsCredentialsForIdentityResponse {
	struct TMap<struct FString, struct FString> Credentials; // 0x00(0x50)
	struct FString IdentityId; // 0x50(0x10)
	char pad_60[0x2cff6c00]; // 0x60(0x2cff6c00)
};

// ScriptStruct BravoHotelCloudPlatform.AwsCredentialsForIdentityRequest
// Size: 0x2cff6960 (Inherited: 0x00)
struct FAwsCredentialsForIdentityRequest {
	struct FString IdentityId; // 0x00(0x10)
	struct TMap<struct FString, struct FString> Logins; // 0x10(0x50)
	char pad_60[0x2cff6900]; // 0x60(0x2cff6900)
};

// ScriptStruct BravoHotelCloudPlatform.AwsIdentityIDResponse
// Size: 0x2cff6a10 (Inherited: 0x00)
struct FAwsIdentityIDResponse {
	struct FString IdentityId; // 0x00(0x10)
	char pad_10[0x2cff6a00]; // 0x10(0x2cff6a00)
};

// ScriptStruct BravoHotelCloudPlatform.AwsAuthChallengeResponse
// Size: 0x2cff6950 (Inherited: 0x00)
struct FAwsAuthChallengeResponse {
	struct TMap<struct FString, struct FString> AuthenticationResult; // 0x00(0x50)
	char pad_50[0x2cff6900]; // 0x50(0x2cff6900)
};

// ScriptStruct BravoHotelCloudPlatform.AwsIdentityIdRequest
// Size: 0x2cff6960 (Inherited: 0x00)
struct FAwsIdentityIdRequest {
	struct FString IdentityPoolId; // 0x00(0x10)
	struct TMap<struct FString, struct FString> Logins; // 0x10(0x50)
	char pad_60[0x2cff6900]; // 0x60(0x2cff6900)
};

// ScriptStruct BravoHotelCloudPlatform.AwsAuthChallengeRequest
// Size: 0x2cff6970 (Inherited: 0x00)
struct FAwsAuthChallengeRequest {
	struct FString ClientId; // 0x00(0x10)
	struct FString ChallengeName; // 0x10(0x10)
	struct TMap<struct FString, struct FString> ChallengeResponses; // 0x20(0x50)
	char pad_70[0x2cff6900]; // 0x70(0x2cff6900)
};

// ScriptStruct BravoHotelCloudPlatform.AwsChallengeParameterResponse
// Size: 0x2cff6960 (Inherited: 0x00)
struct FAwsChallengeParameterResponse {
	struct FString ChallengeName; // 0x00(0x10)
	struct TMap<struct FString, struct FString> ChallengeParameters; // 0x10(0x50)
	char pad_60[0x2cff6900]; // 0x60(0x2cff6900)
};

// ScriptStruct BravoHotelCloudPlatform.AwsAuthRequest
// Size: 0x2cff6968 (Inherited: 0x00)
struct FAwsAuthRequest {
	enum class AwsAuthFlowType AuthFlow; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct FString, struct FString> AuthParameters; // 0x08(0x50)
	struct FString ClientId; // 0x58(0x10)
	char pad_68[0x2cff6900]; // 0x68(0x2cff6900)
};

// ScriptStruct BravoHotelCloudPlatform.Response_Google_AccessToken
// Size: 0x2cff6c28 (Inherited: 0x00)
struct FResponse_Google_AccessToken {
	struct FString access_token; // 0x00(0x10)
	int32_t expires_in; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString token_type; // 0x18(0x10)
	char pad_28[0x2cff6c00]; // 0x28(0x2cff6c00)
};

