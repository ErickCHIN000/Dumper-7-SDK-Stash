#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LivingItemUpgradeRow.LivingItemUpgradeRow_C
// (None)

class UClass* ULivingItemUpgradeRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LivingItemUpgradeRow_C");

	return Clss;
}


// LivingItemUpgradeRow_C LivingItemUpgradeRow.Default__LivingItemUpgradeRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULivingItemUpgradeRow_C* ULivingItemUpgradeRow_C::GetDefaultObj()
{
	static class ULivingItemUpgradeRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULivingItemUpgradeRow_C*>(ULivingItemUpgradeRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LivingItemUpgradeRow.LivingItemUpgradeRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULivingItemUpgradeRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LivingItemUpgradeRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LivingItemUpgradeRow.LivingItemUpgradeRow_C.ExecuteUbergraph_LivingItemUpgradeRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradeData      CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades          (None)
// enum class EValid                  CallFunc_GetLivingItemUpgradesStruct_Paths                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void ULivingItemUpgradeRow_C::ExecuteUbergraph_LivingItemUpgradeRow(int32 EntryPoint, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LivingItemUpgradeRow_C", "ExecuteUbergraph_LivingItemUpgradeRow");

	Params::ULivingItemUpgradeRow_C_ExecuteUbergraph_LivingItemUpgradeRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades = CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades;
	Parms.CallFunc_GetLivingItemUpgradesStruct_Paths = CallFunc_GetLivingItemUpgradesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


