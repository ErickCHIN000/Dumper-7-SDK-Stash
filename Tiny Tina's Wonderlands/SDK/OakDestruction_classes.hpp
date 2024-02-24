#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xCB0 - 0xBF8)
// Class OakDestruction.CryoDestructibleComponent
class UCryoDestructibleComponent : public UGbxDestructibleComponent
{
public:
	class UMaterialInterface*                    BaseMaterial;                                      // 0xBF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FracturedLifeSpan;                                 // 0xC00(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D92[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FracturedMaterial;                                 // 0xC08(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FracturedInteriorMaterial;                         // 0xC10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFractureEffect                       FractureEffect;                                    // 0xC18(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    FracturedActorClass;                               // 0xC28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreezeRateVariation;                               // 0xC30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThawJitterSpeed;                                   // 0xC34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThawJitterScale;                                   // 0xC38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ThawMaterialParamName;                             // 0xC40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DissolveTime;                                      // 0xC48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DissolveDelayTime;                                 // 0xC4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DissolvePositionOffsetScale;                       // 0xC50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAA[0x4C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDestructibleComponent*                LinkedDestructible;                                // 0xCA0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DAB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCryoDestructibleComponent* GetDefaultObj();

};

// 0x68 (0x4C0 - 0x458)
// Class OakDestruction.OakDestructibleFXManager
class AOakDestructibleFXManager : public AActor
{
public:
	uint8                                        Pad_E46[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AOakDestructibleFXManager* GetDefaultObj();

	void OnDestructibleDestroyed(class AActor* DestroyedActor);
	void DestroyAllDestructibles();
	void ClientApplyRadiusDamage(uint32 SyncID, float DamageAmount, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ClientApplyDamage(uint32 SyncID, float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength);
};

}


