#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ProjectionWidget.W_ProjectionWidget_C
// (None)

class UClass* UW_ProjectionWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ProjectionWidget_C");

	return Clss;
}


// W_ProjectionWidget_C W_ProjectionWidget.Default__W_ProjectionWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ProjectionWidget_C* UW_ProjectionWidget_C::GetDefaultObj()
{
	static class UW_ProjectionWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ProjectionWidget_C*>(UW_ProjectionWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ProjectionWidget.W_ProjectionWidget_C.GetOpacityDistanceRanges
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              NearbyDistanceStart                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NearbyDistanceEnd                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ProjectionWidget_C::GetOpacityDistanceRanges(float* NearbyDistanceStart, float* NearbyDistanceEnd, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "GetOpacityDistanceRanges");

	Params::UW_ProjectionWidget_C_GetOpacityDistanceRanges_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NearbyDistanceStart != nullptr)
		*NearbyDistanceStart = Parms.NearbyDistanceStart;

	if (NearbyDistanceEnd != nullptr)
		*NearbyDistanceEnd = Parms.NearbyDistanceEnd;

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.UpdateOpacityForDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceToActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OverrideValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetOpacityDistanceRanges_NearbyDistanceStart            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetOpacityDistanceRanges_NearbyDistanceEnd              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ProjectionWidget_C::UpdateOpacityForDistance(float DistanceToActor, float OverrideValue, float CallFunc_GetOpacityDistanceRanges_NearbyDistanceStart, float CallFunc_GetOpacityDistanceRanges_NearbyDistanceEnd, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "UpdateOpacityForDistance");

	Params::UW_ProjectionWidget_C_UpdateOpacityForDistance_Params Parms{};

	Parms.DistanceToActor = DistanceToActor;
	Parms.OverrideValue = OverrideValue;
	Parms.CallFunc_GetOpacityDistanceRanges_NearbyDistanceStart = CallFunc_GetOpacityDistanceRanges_NearbyDistanceStart;
	Parms.CallFunc_GetOpacityDistanceRanges_NearbyDistanceEnd = CallFunc_GetOpacityDistanceRanges_NearbyDistanceEnd;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.RemoveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ProjectionWidget_C::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "RemoveWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.GetOverridePlacement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaleAlpha                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Alignment                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseOpacity                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ProjectionWidget_C::GetOverridePlacement(struct FVector2D* Location, float* ScaleAlpha, struct FVector2D* Alignment, bool* UseOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "GetOverridePlacement");

	Params::UW_ProjectionWidget_C_GetOverridePlacement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (ScaleAlpha != nullptr)
		*ScaleAlpha = Parms.ScaleAlpha;

	if (Alignment != nullptr)
		*Alignment = std::move(Parms.Alignment);

	if (UseOpacity != nullptr)
		*UseOpacity = Parms.UseOpacity;

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.ShouldUseOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UW_ProjectionWidget_C::ShouldUseOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "ShouldUseOverride");

	Params::UW_ProjectionWidget_C_ShouldUseOverride_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.UpdateEdgeScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AtEdge                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ProjectionWidget_C::UpdateEdgeScreen(bool AtEdge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "UpdateEdgeScreen");

	Params::UW_ProjectionWidget_C_UpdateEdgeScreen_Params Parms{};

	Parms.AtEdge = AtEdge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.TickEdgeScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DirFromCentre                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ProjectionWidget_C::TickEdgeScreen(const struct FVector2D& DirFromCentre)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "TickEdgeScreen");

	Params::UW_ProjectionWidget_C_TickEdgeScreen_Params Parms{};

	Parms.DirFromCentre = DirFromCentre;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.SetProjectionActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_UIProjectionComponent_C* ProjectionActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UW_ProjectionWidget_C::SetProjectionActor(class UBP_UIProjectionComponent_C* ProjectionActor, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "SetProjectionActor");

	Params::UW_ProjectionWidget_C_SetProjectionActor_Params Parms{};

	Parms.ProjectionActor = ProjectionActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.UpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ProjectionWidget_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "UpdateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.TickWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ProjectionWidget_C::TickWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "TickWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ProjectionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.Set Scale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ProjectionWidget_C::Set_Scale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "Set Scale");

	Params::UW_ProjectionWidget_C_Set_Scale_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ProjectionWidget.W_ProjectionWidget_C.ExecuteUbergraph_W_ProjectionWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Scale                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ProjectionWidget_C::ExecuteUbergraph_W_ProjectionWidget(int32 EntryPoint, float K2Node_CustomEvent_Scale, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ProjectionWidget_C", "ExecuteUbergraph_W_ProjectionWidget");

	Params::UW_ProjectionWidget_C_ExecuteUbergraph_W_ProjectionWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Scale = K2Node_CustomEvent_Scale;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


