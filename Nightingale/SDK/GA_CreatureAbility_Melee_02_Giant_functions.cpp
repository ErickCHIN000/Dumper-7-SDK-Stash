#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Melee_02_Giant.GA_CreatureAbility_Melee_02_Giant_C
// (None)

class UClass* UGA_CreatureAbility_Melee_02_Giant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Melee_02_Giant_C");

	return Clss;
}


// GA_CreatureAbility_Melee_02_Giant_C GA_CreatureAbility_Melee_02_Giant.Default__GA_CreatureAbility_Melee_02_Giant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Melee_02_Giant_C* UGA_CreatureAbility_Melee_02_Giant_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Melee_02_Giant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Melee_02_Giant_C*>(UGA_CreatureAbility_Melee_02_Giant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Melee_02_Giant.GA_CreatureAbility_Melee_02_Giant_C.HandleEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetRootMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_HillGiant_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>CallFunc_UnequipEquippedItem_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_HillGiant_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant_1           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_02_Giant_C::HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FGameplayTag& Temp_struct_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AEquippableItem* CallFunc_GetItem_Weapon, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_Creature_Wildlife_HillGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBPI_EquippedItems_C> CallFunc_UnequipEquippedItem_self_CastInput, bool CallFunc_UnequipEquippedItem_Success, class ABP_Creature_Wildlife_HillGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_02_Giant_C", "HandleEvent");

	Params::UGA_CreatureAbility_Melee_02_Giant_C_HandleEvent_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.EventData = EventData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items = K2Node_DynamicCast_AsBPI_Equipped_Items;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItem_Weapon = CallFunc_GetItem_Weapon;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRootMesh_ReturnValue = CallFunc_GetRootMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant = K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_UnequipEquippedItem_self_CastInput = CallFunc_UnequipEquippedItem_self_CastInput;
	Parms.CallFunc_UnequipEquippedItem_Success = CallFunc_UnequipEquippedItem_Success;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant_1 = K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


