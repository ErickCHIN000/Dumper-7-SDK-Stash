#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_OffscreenIndicator.WBP_HUD_OffscreenIndicator_C
// (None)

class UClass* UWBP_HUD_OffscreenIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_OffscreenIndicator_C");

	return Clss;
}


// WBP_HUD_OffscreenIndicator_C WBP_HUD_OffscreenIndicator.Default__WBP_HUD_OffscreenIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_OffscreenIndicator_C* UWBP_HUD_OffscreenIndicator_C::GetDefaultObj()
{
	static class UWBP_HUD_OffscreenIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_OffscreenIndicator_C*>(UWBP_HUD_OffscreenIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_OffscreenIndicator.WBP_HUD_OffscreenIndicator_C.CreateOffscreenMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ActorLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Colour                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_OffscreenIndicator_C::CreateOffscreenMarker(const struct FVector& ActorLocation, const struct FLinearColor& Colour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_OffscreenIndicator_C", "CreateOffscreenMarker");

	Params::UWBP_HUD_OffscreenIndicator_C_CreateOffscreenMarker_Params Parms{};

	Parms.ActorLocation = ActorLocation;
	Parms.Colour = Colour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_OffscreenIndicator.WBP_HUD_OffscreenIndicator_C.RemoveMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HUD_OffscreenIndicator_C::RemoveMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_OffscreenIndicator_C", "RemoveMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_OffscreenIndicator.WBP_HUD_OffscreenIndicator_C.ExecuteUbergraph_WBP_HUD_OffscreenIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FVector                     K2Node_CustomEvent_ActorLocation                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Colour                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_OffScreenMarker_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_OffscreenIndicator_C::ExecuteUbergraph_WBP_HUD_OffscreenIndicator(int32 EntryPoint, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector& K2Node_CustomEvent_ActorLocation, const struct FLinearColor& K2Node_CustomEvent_Colour, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UWBP_HUD_OffScreenMarker_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_OffscreenIndicator_C", "ExecuteUbergraph_WBP_HUD_OffscreenIndicator");

	Params::UWBP_HUD_OffscreenIndicator_C_ExecuteUbergraph_WBP_HUD_OffscreenIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_CustomEvent_ActorLocation = K2Node_CustomEvent_ActorLocation;
	Parms.K2Node_CustomEvent_Colour = K2Node_CustomEvent_Colour;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


