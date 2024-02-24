#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Brutal_Parent.Ability_Brutal_Parent_C
// (None)

class UClass* UAbility_Brutal_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Brutal_Parent_C");

	return Clss;
}


// Ability_Brutal_Parent_C Ability_Brutal_Parent.Default__Ability_Brutal_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Brutal_Parent_C* UAbility_Brutal_Parent_C::GetDefaultObj()
{
	static class UAbility_Brutal_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Brutal_Parent_C*>(UAbility_Brutal_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Brutal_Parent.Ability_Brutal_Parent_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Brutal_Parent_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Brutal_Parent_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Brutal_Parent.Ability_Brutal_Parent_C.ExecuteUbergraph_Ability_Brutal_Parent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Brutal_Parent_C::ExecuteUbergraph_Ability_Brutal_Parent(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Brutal_Parent_C", "ExecuteUbergraph_Ability_Brutal_Parent");

	Params::UAbility_Brutal_Parent_C_ExecuteUbergraph_Ability_Brutal_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


