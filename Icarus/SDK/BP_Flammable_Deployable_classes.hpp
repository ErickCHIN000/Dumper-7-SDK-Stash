#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x12C - 0x12C)
// BlueprintGeneratedClass BP_Flammable_Deployable.BP_Flammable_Deployable_C
class UBP_Flammable_Deployable_C : public UBP_Flammable_Actor_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Flammable_Deployable_C* GetDefaultObj();

	struct FBoxSphereBounds GetLocalBounds(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue_1);
	bool CanPropagate(enum class EFlammablePropagationType PropagationType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
};

}


