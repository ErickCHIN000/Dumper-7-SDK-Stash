#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TitleScreen_Background.UMG_TitleScreen_Background_C
// (None)

class UClass* UUMG_TitleScreen_Background_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TitleScreen_Background_C");

	return Clss;
}


// UMG_TitleScreen_Background_C UMG_TitleScreen_Background.Default__UMG_TitleScreen_Background_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TitleScreen_Background_C* UUMG_TitleScreen_Background_C::GetDefaultObj()
{
	static class UUMG_TitleScreen_Background_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TitleScreen_Background_C*>(UUMG_TitleScreen_Background_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.Update Smooth Mouse Position
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   MousePosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Vector2DInterpTo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_Background_C::Update_Smooth_Mouse_Position(const struct FVector2D& MousePosition, float DeltaTime, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_Background_C", "Update Smooth Mouse Position");

	Params::UUMG_TitleScreen_Background_C_Update_Smooth_Mouse_Position_Params Parms{};

	Parms.MousePosition = MousePosition;
	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Vector2DInterpTo_ReturnValue = CallFunc_Vector2DInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.UpdateParallax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakePulsatingValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakePulsatingValue_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_Background_C::UpdateParallax(float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_MakePulsatingValue_ReturnValue, float CallFunc_MakePulsatingValue_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_Background_C", "UpdateParallax");

	Params::UUMG_TitleScreen_Background_C_UpdateParallax_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_MakePulsatingValue_ReturnValue = CallFunc_MakePulsatingValue_ReturnValue;
	Parms.CallFunc_MakePulsatingValue_ReturnValue_1 = CallFunc_MakePulsatingValue_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_Background_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_Background_C", "Tick");

	Params::UUMG_TitleScreen_Background_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TitleScreen_Background_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_Background_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TitleScreen_Background.UMG_TitleScreen_Background_C.ExecuteUbergraph_UMG_TitleScreen_Background
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_TitleScreen_Background_C::ExecuteUbergraph_UMG_TitleScreen_Background(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TitleScreen_Background_C", "ExecuteUbergraph_UMG_TitleScreen_Background");

	Params::UUMG_TitleScreen_Background_C_ExecuteUbergraph_UMG_TitleScreen_Background_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


