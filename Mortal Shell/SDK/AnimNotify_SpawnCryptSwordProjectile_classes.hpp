#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_SpawnCryptSwordProjectile.AnimNotify_SpawnCryptSwordProjectile_C
class UAnimNotify_SpawnCryptSwordProjectile_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_SpawnCryptSwordProjectile_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess);
};

}


