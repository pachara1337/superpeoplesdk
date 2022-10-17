// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0x2cff6aa0 (Inherited: 0x2cff6a40)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct UNiagaraSystem* Template; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	struct FVector Scale; // 0x60(0x0c)
	char Attached : 1; // 0x90(0x01)
	struct FName SocketName; // 0x94(0x0c)
	char pad_2CFF6A78_1 : 7; // 0x2cff6a78(0x01)
	char pad_2CFF6A79[0x27]; // 0x2cff6a79(0x27)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1755df0
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x2cff6a68 (Inherited: 0x2cff6a38)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct UNiagaraSystem* Template; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x0c)
	struct FVector LocationOffset; // 0x4c(0x0c)
	struct FRotator RotationOffset; // 0x58(0x0c)
	bool bDestroyAtEnd; // 0x64(0x01)
	char pad_2CFF6A65[0x3]; // 0x2cff6a65(0x03)
};

