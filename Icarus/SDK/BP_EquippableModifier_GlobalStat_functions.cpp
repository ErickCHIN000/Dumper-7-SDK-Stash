#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquippableModifier_GlobalStat.BP_EquippableModifier_GlobalStat_C
// (None)

class UClass* UBP_EquippableModifier_GlobalStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquippableModifier_GlobalStat_C");

	return Clss;
}


// BP_EquippableModifier_GlobalStat_C BP_EquippableModifier_GlobalStat.Default__BP_EquippableModifier_GlobalStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EquippableModifier_GlobalStat_C* UBP_EquippableModifier_GlobalStat_C::GetDefaultObj()
{
	static class UBP_EquippableModifier_GlobalStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EquippableModifier_GlobalStat_C*>(UBP_EquippableModifier_GlobalStat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquippableModifier_GlobalStat.BP_EquippableModifier_GlobalStat_C.ItemUnequipped
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AMapManager_C*               CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEquippableData             CallFunc_GetEquippableStruct_Equippable                          (None)
// enum class EValid                  CallFunc_GetEquippableStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemUnequipped_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_EquippableModifier_GlobalStat_C::ItemUnequipped(class AMapManager_C* CallFunc_GetActorOfClass_ReturnValue, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemUnequipped_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableModifier_GlobalStat_C", "ItemUnequipped");

	Params::UBP_EquippableModifier_GlobalStat_C_ItemUnequipped_Params Parms{};

	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetEquippableStruct_Equippable = CallFunc_GetEquippableStruct_Equippable;
	Parms.CallFunc_GetEquippableStruct_Paths = CallFunc_GetEquippableStruct_Paths;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemUnequipped_ReturnValue = CallFunc_ItemUnequipped_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquippableModifier_GlobalStat.BP_EquippableModifier_GlobalStat_C.ItemEquipped
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AMapManager_C*               CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEquippableData             CallFunc_GetEquippableStruct_Equippable                          (None)
// enum class EValid                  CallFunc_GetEquippableStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemEquipped_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_EquippableModifier_GlobalStat_C::ItemEquipped(class AMapManager_C* CallFunc_GetActorOfClass_ReturnValue, const struct FEquippableData& CallFunc_GetEquippableStruct_Equippable, enum class EValid CallFunc_GetEquippableStruct_Paths, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemEquipped_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableModifier_GlobalStat_C", "ItemEquipped");

	Params::UBP_EquippableModifier_GlobalStat_C_ItemEquipped_Params Parms{};

	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetEquippableStruct_Equippable = CallFunc_GetEquippableStruct_Equippable;
	Parms.CallFunc_GetEquippableStruct_Paths = CallFunc_GetEquippableStruct_Paths;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemEquipped_ReturnValue = CallFunc_ItemEquipped_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


