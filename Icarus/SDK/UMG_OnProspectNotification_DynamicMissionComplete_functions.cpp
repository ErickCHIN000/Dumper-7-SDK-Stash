#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_DynamicMissionComplete.UMG_OnProspectNotification_DynamicMissionComplete_C
// (None)

class UClass* UUMG_OnProspectNotification_DynamicMissionComplete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OnProspectNotification_DynamicMissionComplete_C");

	return Clss;
}


// UMG_OnProspectNotification_DynamicMissionComplete_C UMG_OnProspectNotification_DynamicMissionComplete.Default__UMG_OnProspectNotification_DynamicMissionComplete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OnProspectNotification_DynamicMissionComplete_C* UUMG_OnProspectNotification_DynamicMissionComplete_C::GetDefaultObj()
{
	static class UUMG_OnProspectNotification_DynamicMissionComplete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OnProspectNotification_DynamicMissionComplete_C*>(UUMG_OnProspectNotification_DynamicMissionComplete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_OnProspectNotification_DynamicMissionComplete.UMG_OnProspectNotification_DynamicMissionComplete_C.SetMissionReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Credits                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Experience                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_WorkshopCostLarge_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMetaCurrencyRowHandle      Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ExpRewardLarge_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_OnProspectNotification_DynamicMissionComplete_C::SetMissionReward(int32 Credits, int32 Experience, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FMetaCurrencyRowHandle& Temp_struct_Variable, bool CallFunc_Greater_IntInt_ReturnValue_3, class UUMG_ExpRewardLarge_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_DynamicMissionComplete_C", "SetMissionReward");

	Params::UUMG_OnProspectNotification_DynamicMissionComplete_C_SetMissionReward_Params Parms{};

	Parms.Credits = Credits;
	Parms.Experience = Experience;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OnProspectNotification_DynamicMissionComplete.UMG_OnProspectNotification_DynamicMissionComplete_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OnProspectNotification_DynamicMissionComplete_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_DynamicMissionComplete_C", "PreConstruct");

	Params::UUMG_OnProspectNotification_DynamicMissionComplete_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_OnProspectNotification_DynamicMissionComplete.UMG_OnProspectNotification_DynamicMissionComplete_C.ExecuteUbergraph_UMG_OnProspectNotification_DynamicMissionComplete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_OnProspectNotification_DynamicMissionComplete_C::ExecuteUbergraph_UMG_OnProspectNotification_DynamicMissionComplete(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_OnProspectNotification_DynamicMissionComplete_C", "ExecuteUbergraph_UMG_OnProspectNotification_DynamicMissionComplete");

	Params::UUMG_OnProspectNotification_DynamicMissionComplete_C_ExecuteUbergraph_UMG_OnProspectNotification_DynamicMissionComplete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


