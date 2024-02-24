#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuLoadPendingWidget.MenuLoadPendingWidget_C
// (None)

class UClass* UMenuLoadPendingWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuLoadPendingWidget_C");

	return Clss;
}


// MenuLoadPendingWidget_C MenuLoadPendingWidget.Default__MenuLoadPendingWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuLoadPendingWidget_C* UMenuLoadPendingWidget_C::GetDefaultObj()
{
	static class UMenuLoadPendingWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuLoadPendingWidget_C*>(UMenuLoadPendingWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuLoadPendingWidget.MenuLoadPendingWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuLoadPendingWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuLoadPendingWidget_C", "Tick");

	Params::UMenuLoadPendingWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuLoadPendingWidget.MenuLoadPendingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuLoadPendingWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuLoadPendingWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuLoadPendingWidget.MenuLoadPendingWidget_C.ExecuteUbergraph_MenuLoadPendingWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuLoadPendingWidget_C::ExecuteUbergraph_MenuLoadPendingWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuLoadPendingWidget_C", "ExecuteUbergraph_MenuLoadPendingWidget");

	Params::UMenuLoadPendingWidget_C_ExecuteUbergraph_MenuLoadPendingWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


