#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GridPanel.BP_GridPanel_C
// (Actor)

class UClass* ABP_GridPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GridPanel_C");

	return Clss;
}


// BP_GridPanel_C BP_GridPanel.Default__BP_GridPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GridPanel_C* ABP_GridPanel_C::GetDefaultObj()
{
	static class ABP_GridPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GridPanel_C*>(ABP_GridPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GridPanel.BP_GridPanel_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.SolveTrack__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::SolveTrack__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "SolveTrack__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.SolveTrack__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::SolveTrack__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "SolveTrack__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GridPanel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "ReceiveTick");

	Params::ABP_GridPanel_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GridPanel.BP_GridPanel_C.BP_PlayBackgroundSolveAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::BP_PlayBackgroundSolveAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "BP_PlayBackgroundSolveAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.BP_SetBackgroundColorToSolved
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::BP_SetBackgroundColorToSolved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "BP_SetBackgroundColorToSolved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.BPI_PuzzleFullyOpened
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::BPI_PuzzleFullyOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "BPI_PuzzleFullyOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.BPI_PuzzleClosed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::BPI_PuzzleClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "BPI_PuzzleClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GridPanel_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "ReceiveEndPlay");

	Params::ABP_GridPanel_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GridPanel.BP_GridPanel_C.BP_PlayBackgroundDoppelSolveAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GridPanel_C::BP_PlayBackgroundDoppelSolveAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "BP_PlayBackgroundDoppelSolveAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GridPanel.BP_GridPanel_C.ExecuteUbergraph_BP_GridPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatCVar_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatCVar_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GridPanel_C::ExecuteUbergraph_BP_GridPanel(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaSeconds, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GridPanel_C", "ExecuteUbergraph_BP_GridPanel");

	Params::ABP_GridPanel_C_ExecuteUbergraph_BP_GridPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue = CallFunc_GetFloatCVar_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatCVar_ReturnValue_1 = CallFunc_GetFloatCVar_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue_1 = CallFunc_NotEqual_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


