#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Eoten_Reburrow.AIA_Creature_Eoten_Reburrow_C
class UAIA_Creature_Eoten_Reburrow_C : public UAIA_CreatureBase_C
{
public:

	static class UClass* StaticClass();
	static class UAIA_Creature_Eoten_Reburrow_C* GetDefaultObj();

	bool CheckOwnerRequirements(bool StayHostile, const struct FGameplayTag& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsMaxHealth_bIsMinHealth, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, int32 CallFunc_Add_IntInt_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetPerceivedHostileActorsBySense_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsInAnyDeathState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


