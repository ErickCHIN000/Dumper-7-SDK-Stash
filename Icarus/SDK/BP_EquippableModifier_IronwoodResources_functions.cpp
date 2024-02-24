#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquippableModifier_IronwoodResources.BP_EquippableModifier_IronwoodResources_C
// (None)

class UClass* UBP_EquippableModifier_IronwoodResources_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquippableModifier_IronwoodResources_C");

	return Clss;
}


// BP_EquippableModifier_IronwoodResources_C BP_EquippableModifier_IronwoodResources.Default__BP_EquippableModifier_IronwoodResources_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EquippableModifier_IronwoodResources_C* UBP_EquippableModifier_IronwoodResources_C::GetDefaultObj()
{
	static class UBP_EquippableModifier_IronwoodResources_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EquippableModifier_IronwoodResources_C*>(UBP_EquippableModifier_IronwoodResources_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquippableModifier_IronwoodResources.BP_EquippableModifier_IronwoodResources_C.ItemUnequipped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemUnequipped_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_EquippableModifier_IronwoodResources_C::ItemUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ItemUnequipped_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableModifier_IronwoodResources_C", "ItemUnequipped");

	Params::UBP_EquippableModifier_IronwoodResources_C_ItemUnequipped_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ItemUnequipped_ReturnValue = CallFunc_ItemUnequipped_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquippableModifier_IronwoodResources.BP_EquippableModifier_IronwoodResources_C.ItemEquipped
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemEquipped_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_EquippableModifier_IronwoodResources_C::ItemEquipped(const struct FModifier& K2Node_MakeStruct_Modifier, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ItemEquipped_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableModifier_IronwoodResources_C", "ItemEquipped");

	Params::UBP_EquippableModifier_IronwoodResources_C_ItemEquipped_Params Parms{};

	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ItemEquipped_ReturnValue = CallFunc_ItemEquipped_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


