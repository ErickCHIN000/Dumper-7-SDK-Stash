#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Shaman_Ward_BogTotem_TotalCrit.Ability_Shaman_Ward_BogTotem_TotalCrit_C
// (None)

class UClass* UAbility_Shaman_Ward_BogTotem_TotalCrit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Shaman_Ward_BogTotem_TotalCrit_C");

	return Clss;
}


// Ability_Shaman_Ward_BogTotem_TotalCrit_C Ability_Shaman_Ward_BogTotem_TotalCrit.Default__Ability_Shaman_Ward_BogTotem_TotalCrit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Shaman_Ward_BogTotem_TotalCrit_C* UAbility_Shaman_Ward_BogTotem_TotalCrit_C::GetDefaultObj()
{
	static class UAbility_Shaman_Ward_BogTotem_TotalCrit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Shaman_Ward_BogTotem_TotalCrit_C*>(UAbility_Shaman_Ward_BogTotem_TotalCrit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Shaman_Ward_BogTotem_TotalCrit.Ability_Shaman_Ward_BogTotem_TotalCrit_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Shaman_Ward_BogTotem_TotalCrit_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Ward_BogTotem_TotalCrit_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Shaman_Ward_BogTotem_TotalCrit.Ability_Shaman_Ward_BogTotem_TotalCrit_C.SetManagedBogTotemCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAbility_Shaman_Ward_BogTotem_TotalCrit_C::SetManagedBogTotemCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Ward_BogTotem_TotalCrit_C", "SetManagedBogTotemCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Shaman_Ward_BogTotem_TotalCrit.Ability_Shaman_Ward_BogTotem_TotalCrit_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Shaman_Ward_BogTotem_TotalCrit_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Ward_BogTotem_TotalCrit_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Shaman_Ward_BogTotem_TotalCrit.Ability_Shaman_Ward_BogTotem_TotalCrit_C.ExecuteUbergraph_Ability_Shaman_Ward_BogTotem_TotalCrit
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue                              (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetManagedActorCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Shaman_Ward_BogTotem_TotalCrit_C::ExecuteUbergraph_Ability_Shaman_Ward_BogTotem_TotalCrit(int32 EntryPoint, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetManagedActorCount_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Shaman_Ward_BogTotem_TotalCrit_C", "ExecuteUbergraph_Ability_Shaman_Ward_BogTotem_TotalCrit");

	Params::UAbility_Shaman_Ward_BogTotem_TotalCrit_C_ExecuteUbergraph_Ability_Shaman_Ward_BogTotem_TotalCrit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetManagedActorCount_ReturnValue = CallFunc_GetManagedActorCount_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


