#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_GameMessageContainer.UMG_GameMessageContainer_C
// (None)

class UClass* UUMG_GameMessageContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_GameMessageContainer_C");

	return Clss;
}


// UMG_GameMessageContainer_C UMG_GameMessageContainer.Default__UMG_GameMessageContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_GameMessageContainer_C* UUMG_GameMessageContainer_C::GetDefaultObj()
{
	static class UUMG_GameMessageContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_GameMessageContainer_C*>(UUMG_GameMessageContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_GameMessageContainer.UMG_GameMessageContainer_C.AddMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              LifeTimeOverride                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_GameMessageContainer_C::AddMessage(bool Error, class FText Message, float LifeTimeOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GameMessageContainer_C", "AddMessage");

	Params::UUMG_GameMessageContainer_C_AddMessage_Params Parms{};

	Parms.Error = Error;
	Parms.Message = Message;
	Parms.LifeTimeOverride = LifeTimeOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_GameMessageContainer.UMG_GameMessageContainer_C.ExecuteUbergraph_UMG_GameMessageContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_GameMessage_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_GameMessage_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Error                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// float                              K2Node_CustomEvent_LifetimeOverride                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_GameMessageContainer_C::ExecuteUbergraph_UMG_GameMessageContainer(int32 EntryPoint, class UUMG_GameMessage_C* CallFunc_Create_ReturnValue, class UUMG_GameMessage_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool K2Node_CustomEvent_Error, class FText K2Node_CustomEvent_Message, float K2Node_CustomEvent_LifetimeOverride, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_GameMessageContainer_C", "ExecuteUbergraph_UMG_GameMessageContainer");

	Params::UUMG_GameMessageContainer_C_ExecuteUbergraph_UMG_GameMessageContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CustomEvent_Error = K2Node_CustomEvent_Error;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_CustomEvent_LifetimeOverride = K2Node_CustomEvent_LifetimeOverride;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


