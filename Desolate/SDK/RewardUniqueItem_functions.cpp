#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RewardUniqueItem.RewardUniqueItem_C
// (None)

class UClass* URewardUniqueItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardUniqueItem_C");

	return Clss;
}


// RewardUniqueItem_C RewardUniqueItem.Default__RewardUniqueItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URewardUniqueItem_C* URewardUniqueItem_C::GetDefaultObj()
{
	static class URewardUniqueItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardUniqueItem_C*>(URewardUniqueItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RewardUniqueItem.RewardUniqueItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URewardUniqueItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardUniqueItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardUniqueItem.RewardUniqueItem_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardUniqueItem_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardUniqueItem_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardUniqueItem.RewardUniqueItem_C.ExecuteUbergraph_RewardUniqueItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void URewardUniqueItem_C::ExecuteUbergraph_RewardUniqueItem(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardUniqueItem_C", "ExecuteUbergraph_RewardUniqueItem");

	Params::URewardUniqueItem_C_ExecuteUbergraph_RewardUniqueItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


