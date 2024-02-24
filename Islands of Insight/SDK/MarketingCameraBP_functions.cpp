#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MarketingCameraBP.MarketingCameraBP_C
// (Actor)

class UClass* AMarketingCameraBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MarketingCameraBP_C");

	return Clss;
}


// MarketingCameraBP_C MarketingCameraBP.Default__MarketingCameraBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMarketingCameraBP_C* AMarketingCameraBP_C::GetDefaultObj()
{
	static class AMarketingCameraBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMarketingCameraBP_C*>(AMarketingCameraBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_21");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_20");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_19");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_18");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_17");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_16");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_15");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_13");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_10");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_7");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_3");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_1");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0");

	Params::AMarketingCameraBP_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0");

	Params::AMarketingCameraBP_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2");

	Params::AMarketingCameraBP_C_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_3
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_3");

	Params::AMarketingCameraBP_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_3_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_4
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMarketingCameraBP_C::InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_4");

	Params::AMarketingCameraBP_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_4_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMarketingCameraBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "ReceiveTick");

	Params::AMarketingCameraBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MarketingCameraBP.MarketingCameraBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMarketingCameraBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MarketingCameraBP.MarketingCameraBP_C.ExecuteUbergraph_MarketingCameraBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_13                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_12                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_11                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_10                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_9                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_8                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_7                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_6                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_5                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_4                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// class UWBP_CameraValues_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_14                                      (HasGetValueTypeHash)
// float                              K2Node_InputAxisKeyEvent_AxisValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisKeyEvent_AxisValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisKeyEvent_AxisValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisKeyEvent_AxisValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_15                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_16                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_4                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_17                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_18                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_5                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_19                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_20                                      (HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDOF_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_21                                      (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMarketingCameraBP_C::ExecuteUbergraph_MarketingCameraBP(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_13, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key_12, const struct FKey& K2Node_InputKeyEvent_Key_11, const struct FKey& K2Node_InputKeyEvent_Key_10, const struct FKey& K2Node_InputKeyEvent_Key_9, const struct FKey& K2Node_InputKeyEvent_Key_8, const struct FKey& K2Node_InputKeyEvent_Key_7, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& K2Node_InputKeyEvent_Key_5, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& Temp_struct_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable_2, class UWBP_CameraValues_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_14, float K2Node_InputAxisKeyEvent_AxisValue_3, float K2Node_InputAxisKeyEvent_AxisValue_2, float K2Node_InputAxisKeyEvent_AxisValue_1, float K2Node_InputAxisKeyEvent_AxisValue, const struct FKey& Temp_struct_Variable_3, const struct FKey& K2Node_InputKeyEvent_Key_15, const struct FKey& K2Node_InputKeyEvent_Key_16, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputKeyEvent_Key_17, const struct FKey& K2Node_InputKeyEvent_Key_18, const struct FKey& Temp_struct_Variable_5, const struct FKey& K2Node_InputKeyEvent_Key_19, const struct FKey& K2Node_InputKeyEvent_Key_20, float K2Node_Event_DeltaSeconds, float CallFunc_GetDOF_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_21, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MarketingCameraBP_C", "ExecuteUbergraph_MarketingCameraBP");

	Params::AMarketingCameraBP_C_ExecuteUbergraph_MarketingCameraBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key_13 = K2Node_InputKeyEvent_Key_13;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputKeyEvent_Key_12 = K2Node_InputKeyEvent_Key_12;
	Parms.K2Node_InputKeyEvent_Key_11 = K2Node_InputKeyEvent_Key_11;
	Parms.K2Node_InputKeyEvent_Key_10 = K2Node_InputKeyEvent_Key_10;
	Parms.K2Node_InputKeyEvent_Key_9 = K2Node_InputKeyEvent_Key_9;
	Parms.K2Node_InputKeyEvent_Key_8 = K2Node_InputKeyEvent_Key_8;
	Parms.K2Node_InputKeyEvent_Key_7 = K2Node_InputKeyEvent_Key_7;
	Parms.K2Node_InputKeyEvent_Key_6 = K2Node_InputKeyEvent_Key_6;
	Parms.K2Node_InputKeyEvent_Key_5 = K2Node_InputKeyEvent_Key_5;
	Parms.K2Node_InputKeyEvent_Key_4 = K2Node_InputKeyEvent_Key_4;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_14 = K2Node_InputKeyEvent_Key_14;
	Parms.K2Node_InputAxisKeyEvent_AxisValue_3 = K2Node_InputAxisKeyEvent_AxisValue_3;
	Parms.K2Node_InputAxisKeyEvent_AxisValue_2 = K2Node_InputAxisKeyEvent_AxisValue_2;
	Parms.K2Node_InputAxisKeyEvent_AxisValue_1 = K2Node_InputAxisKeyEvent_AxisValue_1;
	Parms.K2Node_InputAxisKeyEvent_AxisValue = K2Node_InputAxisKeyEvent_AxisValue;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_InputKeyEvent_Key_15 = K2Node_InputKeyEvent_Key_15;
	Parms.K2Node_InputKeyEvent_Key_16 = K2Node_InputKeyEvent_Key_16;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_InputKeyEvent_Key_17 = K2Node_InputKeyEvent_Key_17;
	Parms.K2Node_InputKeyEvent_Key_18 = K2Node_InputKeyEvent_Key_18;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_InputKeyEvent_Key_19 = K2Node_InputKeyEvent_Key_19;
	Parms.K2Node_InputKeyEvent_Key_20 = K2Node_InputKeyEvent_Key_20;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetDOF_ReturnValue = CallFunc_GetDOF_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_21 = K2Node_InputKeyEvent_Key_21;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


