#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCampNotifyHUD.BaseCampNotifyHUD_C
// (None)

class UClass* UBaseCampNotifyHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCampNotifyHUD_C");

	return Clss;
}


// BaseCampNotifyHUD_C BaseCampNotifyHUD.Default__BaseCampNotifyHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCampNotifyHUD_C* UBaseCampNotifyHUD_C::GetDefaultObj()
{
	static class UBaseCampNotifyHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCampNotifyHUD_C*>(UBaseCampNotifyHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseCampNotifyHUD.BaseCampNotifyHUD_C.CheckSlideAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UHom_top_list02_C*           K2Node_DynamicCast_AsHom_Top_List_02                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBaseCampNotifyHUD_C::CheckSlideAnimation(class UUserWidget* Widget, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_02, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCampNotifyHUD_C", "CheckSlideAnimation");

	Params::UBaseCampNotifyHUD_C_CheckSlideAnimation_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_DynamicCast_AsHom_Top_List_02 = K2Node_DynamicCast_AsHom_Top_List_02;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseCampNotifyHUD.BaseCampNotifyHUD_C.PlaySlideAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCampNotifyHUD_C::PlaySlideAnimation(class UUserWidget* Widget, int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCampNotifyHUD_C", "PlaySlideAnimation");

	Params::UBaseCampNotifyHUD_C_PlaySlideAnimation_Params Parms{};

	Parms.Widget = Widget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCampNotifyHUD.BaseCampNotifyHUD_C.PlayInAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCampNotifyHUD_C::PlayInAnimation(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCampNotifyHUD_C", "PlayInAnimation");

	Params::UBaseCampNotifyHUD_C_PlayInAnimation_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCampNotifyHUD.BaseCampNotifyHUD_C.PlayOutAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCampNotifyHUD_C::PlayOutAnimation(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCampNotifyHUD_C", "PlayOutAnimation");

	Params::UBaseCampNotifyHUD_C_PlayOutAnimation_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCampNotifyHUD.BaseCampNotifyHUD_C.StopAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBaseCampNotifyHUD_C::StopAnimation(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCampNotifyHUD_C", "StopAnimation");

	Params::UBaseCampNotifyHUD_C_StopAnimation_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCampNotifyHUD.BaseCampNotifyHUD_C.ExecuteUbergraph_BaseCampNotifyHUD
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHom_top_list02_C*           K2Node_DynamicCast_AsHom_Top_List_02                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_widget3                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_state                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHom_top_list02_C*           K2Node_DynamicCast_AsHom_Top_List_021                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_widget2                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHom_top_list02_C*           K2Node_DynamicCast_AsHom_Top_List_022                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_widget1                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHom_top_list02_C*           K2Node_DynamicCast_AsHom_Top_List_023                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBaseCampNotifyHUD_C::ExecuteUbergraph_BaseCampNotifyHUD(int32 EntryPoint, class UUserWidget* K2Node_Event_Widget, int32 Temp_int_Variable, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_02, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_Event_widget3, int32 K2Node_Event_state, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_021, bool K2Node_DynamicCast_bSuccess1, class UUserWidget* K2Node_Event_widget2, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_022, bool K2Node_DynamicCast_bSuccess2, class UWidgetAnimation* K2Node_Select_Default, class UUserWidget* K2Node_Event_widget1, class UHom_top_list02_C* K2Node_DynamicCast_AsHom_Top_List_023, bool K2Node_DynamicCast_bSuccess3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCampNotifyHUD_C", "ExecuteUbergraph_BaseCampNotifyHUD");

	Params::UBaseCampNotifyHUD_C_ExecuteUbergraph_BaseCampNotifyHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsHom_Top_List_02 = K2Node_DynamicCast_AsHom_Top_List_02;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_widget3 = K2Node_Event_widget3;
	Parms.K2Node_Event_state = K2Node_Event_state;
	Parms.K2Node_DynamicCast_AsHom_Top_List_021 = K2Node_DynamicCast_AsHom_Top_List_021;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_widget2 = K2Node_Event_widget2;
	Parms.K2Node_DynamicCast_AsHom_Top_List_022 = K2Node_DynamicCast_AsHom_Top_List_022;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_widget1 = K2Node_Event_widget1;
	Parms.K2Node_DynamicCast_AsHom_Top_List_023 = K2Node_DynamicCast_AsHom_Top_List_023;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;

	UObject::ProcessEvent(Func, &Parms);

}

}


