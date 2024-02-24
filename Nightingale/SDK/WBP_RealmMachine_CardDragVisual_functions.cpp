#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RealmMachine_CardDragVisual.WBP_RealmMachine_CardDragVisual_C
// (None)

class UClass* UWBP_RealmMachine_CardDragVisual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RealmMachine_CardDragVisual_C");

	return Clss;
}


// WBP_RealmMachine_CardDragVisual_C WBP_RealmMachine_CardDragVisual.Default__WBP_RealmMachine_CardDragVisual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RealmMachine_CardDragVisual_C* UWBP_RealmMachine_CardDragVisual_C::GetDefaultObj()
{
	static class UWBP_RealmMachine_CardDragVisual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RealmMachine_CardDragVisual_C*>(UWBP_RealmMachine_CardDragVisual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RealmMachine_CardDragVisual.WBP_RealmMachine_CardDragVisual_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RealmMachine_CardDragVisual_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmMachine_CardDragVisual_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmMachine_CardDragVisual.WBP_RealmMachine_CardDragVisual_C.ExecuteUbergraph_WBP_RealmMachine_CardDragVisual
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_RealmCard_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmMachine_CardDragVisual_C::ExecuteUbergraph_WBP_RealmMachine_CardDragVisual(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_RealmCard_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmMachine_CardDragVisual_C", "ExecuteUbergraph_WBP_RealmMachine_CardDragVisual");

	Params::UWBP_RealmMachine_CardDragVisual_C_ExecuteUbergraph_WBP_RealmMachine_CardDragVisual_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


