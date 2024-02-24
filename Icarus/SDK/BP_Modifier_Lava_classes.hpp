#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x398 - 0x398)
// BlueprintGeneratedClass BP_Modifier_Lava.BP_Modifier_Lava_C
class UBP_Modifier_Lava_C : public UBP_Modifier_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Modifier_Lava_C* GetDefaultObj();

	bool ModifierApplied(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue);
};

}


