#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_InventoryNotify.WB_InventoryNotify_C
// (None)

class UClass* UWB_InventoryNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_InventoryNotify_C");

	return Clss;
}


// WB_InventoryNotify_C WB_InventoryNotify.Default__WB_InventoryNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_InventoryNotify_C* UWB_InventoryNotify_C::GetDefaultObj()
{
	static class UWB_InventoryNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_InventoryNotify_C*>(UWB_InventoryNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_InventoryNotify.WB_InventoryNotify_C.Set Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_InventoryNotify_C::Set_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryNotify_C", "Set Text");

	Params::UWB_InventoryNotify_C_Set_Text_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_InventoryNotify.WB_InventoryNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_InventoryNotify_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryNotify_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_InventoryNotify.WB_InventoryNotify_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InventoryNotify_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryNotify_C", "OnAnimationFinished");

	Params::UWB_InventoryNotify_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_InventoryNotify.WB_InventoryNotify_C.ExecuteUbergraph_WB_InventoryNotify
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_InventoryNotify_C::ExecuteUbergraph_WB_InventoryNotify(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidgetAnimation* K2Node_Event_Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_InventoryNotify_C", "ExecuteUbergraph_WB_InventoryNotify");

	Params::UWB_InventoryNotify_C_ExecuteUbergraph_WB_InventoryNotify_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;

	UObject::ProcessEvent(Func, &Parms);

}

}


