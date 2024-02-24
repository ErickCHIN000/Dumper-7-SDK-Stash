#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InputCaptureComponent.BP_InputCaptureComponent_C
// (None)

class UClass* UBP_InputCaptureComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InputCaptureComponent_C");

	return Clss;
}


// BP_InputCaptureComponent_C BP_InputCaptureComponent.Default__BP_InputCaptureComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InputCaptureComponent_C* UBP_InputCaptureComponent_C::GetDefaultObj()
{
	static class UBP_InputCaptureComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InputCaptureComponent_C*>(UBP_InputCaptureComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ShouldBlockInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_InputCaptureComponent_C::ShouldBlockInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ShouldBlockInput");

	Params::UBP_InputCaptureComponent_C_ShouldBlockInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.EndInputCapture
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InputCaptureComponent_C* CaptureComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::EndInputCapture(class UBP_InputCaptureComponent_C* CaptureComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "EndInputCapture");

	Params::UBP_InputCaptureComponent_C_EndInputCapture_Params Parms{};

	Parms.CaptureComponent = CaptureComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.BeginInputCapture
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InputCaptureComponent_C* CaptureComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::BeginInputCapture(class UBP_InputCaptureComponent_C* CaptureComponent, class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "BeginInputCapture");

	Params::UBP_InputCaptureComponent_C_BeginInputCapture_Params Parms{};

	Parms.CaptureComponent = CaptureComponent;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerLookUp
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::ServerLookUp(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ServerLookUp");

	Params::UBP_InputCaptureComponent_C_ServerLookUp_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerLookRight
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::ServerLookRight(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ServerLookRight");

	Params::UBP_InputCaptureComponent_C_ServerLookRight_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerFire
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputCaptureComponent_C::ServerFire(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ServerFire");

	Params::UBP_InputCaptureComponent_C_ServerFire_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerAltFire
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputCaptureComponent_C::ServerAltFire(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ServerAltFire");

	Params::UBP_InputCaptureComponent_C_ServerAltFire_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerMoveForward
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::ServerMoveForward(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ServerMoveForward");

	Params::UBP_InputCaptureComponent_C_ServerMoveForward_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerJump
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputCaptureComponent_C::ServerJump(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ServerJump");

	Params::UBP_InputCaptureComponent_C_ServerJump_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ExecuteUbergraph_BP_InputCaptureComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputCaptureComponent_C* K2Node_CustomEvent_CaptureComponent_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_InputCaptureComponent_C* K2Node_CustomEvent_CaptureComponent                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Instigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AxisValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AxisValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Pressed_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Pressed_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_AxisValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Pressed                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::ExecuteUbergraph_BP_InputCaptureComponent(int32 EntryPoint, class UBP_InputCaptureComponent_C* K2Node_CustomEvent_CaptureComponent_1, class UBP_InputCaptureComponent_C* K2Node_CustomEvent_CaptureComponent, class AActor* K2Node_CustomEvent_Instigator, float K2Node_CustomEvent_AxisValue_2, float K2Node_CustomEvent_AxisValue_1, bool K2Node_CustomEvent_Pressed_2, bool K2Node_CustomEvent_Pressed_1, float K2Node_CustomEvent_AxisValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool K2Node_CustomEvent_Pressed, float CallFunc_SelectFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "ExecuteUbergraph_BP_InputCaptureComponent");

	Params::UBP_InputCaptureComponent_C_ExecuteUbergraph_BP_InputCaptureComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_CaptureComponent_1 = K2Node_CustomEvent_CaptureComponent_1;
	Parms.K2Node_CustomEvent_CaptureComponent = K2Node_CustomEvent_CaptureComponent;
	Parms.K2Node_CustomEvent_Instigator = K2Node_CustomEvent_Instigator;
	Parms.K2Node_CustomEvent_AxisValue_2 = K2Node_CustomEvent_AxisValue_2;
	Parms.K2Node_CustomEvent_AxisValue_1 = K2Node_CustomEvent_AxisValue_1;
	Parms.K2Node_CustomEvent_Pressed_2 = K2Node_CustomEvent_Pressed_2;
	Parms.K2Node_CustomEvent_Pressed_1 = K2Node_CustomEvent_Pressed_1;
	Parms.K2Node_CustomEvent_AxisValue = K2Node_CustomEvent_AxisValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_Pressed = K2Node_CustomEvent_Pressed;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnJump__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputCaptureComponent_C::OnJump__DelegateSignature(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnJump__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnJump__DelegateSignature_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnMoveForward__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::OnMoveForward__DelegateSignature(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnMoveForward__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnMoveForward__DelegateSignature_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnBeginInputCapture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InputCaptureComponent_C* CaptureComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::OnBeginInputCapture__DelegateSignature(class UBP_InputCaptureComponent_C* CaptureComponent, class AActor* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnBeginInputCapture__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnBeginInputCapture__DelegateSignature_Params Parms{};

	Parms.CaptureComponent = CaptureComponent;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnEndInputCapture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InputCaptureComponent_C* CaptureComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::OnEndInputCapture__DelegateSignature(class UBP_InputCaptureComponent_C* CaptureComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnEndInputCapture__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnEndInputCapture__DelegateSignature_Params Parms{};

	Parms.CaptureComponent = CaptureComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnAltFire__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputCaptureComponent_C::OnAltFire__DelegateSignature(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnAltFire__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnAltFire__DelegateSignature_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnFire__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_InputCaptureComponent_C::OnFire__DelegateSignature(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnFire__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnFire__DelegateSignature_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnLookRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::OnLookRight__DelegateSignature(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnLookRight__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnLookRight__DelegateSignature_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnLookUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InputCaptureComponent_C::OnLookUp__DelegateSignature(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InputCaptureComponent_C", "OnLookUp__DelegateSignature");

	Params::UBP_InputCaptureComponent_C_OnLookUp__DelegateSignature_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


