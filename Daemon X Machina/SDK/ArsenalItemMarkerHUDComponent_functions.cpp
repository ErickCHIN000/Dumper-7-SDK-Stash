#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C
// (None)

class UClass* UArsenalItemMarkerHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalItemMarkerHUDComponent_C");

	return Clss;
}


// ArsenalItemMarkerHUDComponent_C ArsenalItemMarkerHUDComponent.Default__ArsenalItemMarkerHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalItemMarkerHUDComponent_C* UArsenalItemMarkerHUDComponent_C::GetDefaultObj()
{
	static class UArsenalItemMarkerHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalItemMarkerHUDComponent_C*>(UArsenalItemMarkerHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C.GetHUDWidgetDescriptionInAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_fielditem_top00_C*      K2Node_DynamicCast_AsMsn_Fielditem_Top_00                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidgetAnimation* UArsenalItemMarkerHUDComponent_C::GetHUDWidgetDescriptionInAnim(class UUserWidget* HUD, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalItemMarkerHUDComponent_C", "GetHUDWidgetDescriptionInAnim");

	Params::UArsenalItemMarkerHUDComponent_C_GetHUDWidgetDescriptionInAnim_Params Parms{};

	Parms.HUD = HUD;
	Parms.K2Node_DynamicCast_AsMsn_Fielditem_Top_00 = K2Node_DynamicCast_AsMsn_Fielditem_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C.GetHUDWidgetNoAccessAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_fielditem_top00_C*      K2Node_DynamicCast_AsMsn_Fielditem_Top_00                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidgetAnimation* UArsenalItemMarkerHUDComponent_C::GetHUDWidgetNoAccessAnim(class UUserWidget* HUD, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalItemMarkerHUDComponent_C", "GetHUDWidgetNoAccessAnim");

	Params::UArsenalItemMarkerHUDComponent_C_GetHUDWidgetNoAccessAnim_Params Parms{};

	Parms.HUD = HUD;
	Parms.K2Node_DynamicCast_AsMsn_Fielditem_Top_00 = K2Node_DynamicCast_AsMsn_Fielditem_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C.GetHUDWidgetAccessAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_fielditem_top00_C*      K2Node_DynamicCast_AsMsn_Fielditem_Top_00                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidgetAnimation* UArsenalItemMarkerHUDComponent_C::GetHUDWidgetAccessAnim(class UUserWidget* HUD, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalItemMarkerHUDComponent_C", "GetHUDWidgetAccessAnim");

	Params::UArsenalItemMarkerHUDComponent_C_GetHUDWidgetAccessAnim_Params Parms{};

	Parms.HUD = HUD;
	Parms.K2Node_DynamicCast_AsMsn_Fielditem_Top_00 = K2Node_DynamicCast_AsMsn_Fielditem_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C.PlayStartAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalItemMarkerHUDComponent_C::PlayStartAnimation(class UUserWidget* HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalItemMarkerHUDComponent_C", "PlayStartAnimation");

	Params::UArsenalItemMarkerHUDComponent_C_PlayStartAnimation_Params Parms{};

	Parms.HUD = HUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C.UpdateHUDBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalItemMarkerHUDComponent_C::UpdateHUDBP(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalItemMarkerHUDComponent_C", "UpdateHUDBP");

	Params::UArsenalItemMarkerHUDComponent_C_UpdateHUDBP_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C.PlayDisableAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalItemMarkerHUDComponent_C::PlayDisableAnimation(class UUserWidget* HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalItemMarkerHUDComponent_C", "PlayDisableAnimation");

	Params::UArsenalItemMarkerHUDComponent_C_PlayDisableAnimation_Params Parms{};

	Parms.HUD = HUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ArsenalItemMarkerHUDComponent.ArsenalItemMarkerHUDComponent_C.ExecuteUbergraph_ArsenalItemMarkerHUDComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_hud                                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_hud1                                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_fielditem_top00_C*      K2Node_DynamicCast_AsMsn_Fielditem_Top_00                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_fielditem_top00_C*      K2Node_DynamicCast_AsMsn_Fielditem_Top_001                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalItemMarkerHUDComponent_C::ExecuteUbergraph_ArsenalItemMarkerHUDComponent(int32 EntryPoint, class UUserWidget* K2Node_Event_hud, class UUserWidget* K2Node_Event_hud1, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_00, bool K2Node_DynamicCast_bSuccess, class UMsn_fielditem_top00_C* K2Node_DynamicCast_AsMsn_Fielditem_Top_001, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue1, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalItemMarkerHUDComponent_C", "ExecuteUbergraph_ArsenalItemMarkerHUDComponent");

	Params::UArsenalItemMarkerHUDComponent_C_ExecuteUbergraph_ArsenalItemMarkerHUDComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_hud = K2Node_Event_hud;
	Parms.K2Node_Event_hud1 = K2Node_Event_hud1;
	Parms.K2Node_DynamicCast_AsMsn_Fielditem_Top_00 = K2Node_DynamicCast_AsMsn_Fielditem_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMsn_Fielditem_Top_001 = K2Node_DynamicCast_AsMsn_Fielditem_Top_001;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


