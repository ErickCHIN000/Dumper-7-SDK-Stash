#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffObject.BuffObject_C
// (None)

class UClass* UBuffObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffObject_C");

	return Clss;
}


// BuffObject_C BuffObject.Default__BuffObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffObject_C* UBuffObject_C::GetDefaultObj()
{
	static class UBuffObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffObject_C*>(UBuffObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffObject.BuffObject_C.GetGameplayGM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameplayGM_C*               GameModeRef                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObject_C::GetGameplayGM(class AGameplayGM_C** GameModeRef, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "GetGameplayGM");

	Params::UBuffObject_C_GetGameplayGM_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (GameModeRef != nullptr)
		*GameModeRef = Parms.GameModeRef;

}


// Function BuffObject.BuffObject_C.GetActorToBuffAsBarbarous
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABarbarous_C*                AsBarbarous                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                K2Node_DynamicCast_AsBarbarous                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObject_C::GetActorToBuffAsBarbarous(class ABarbarous_C** AsBarbarous, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "GetActorToBuffAsBarbarous");

	Params::UBuffObject_C_GetActorToBuffAsBarbarous_Params Parms{};

	Parms.K2Node_DynamicCast_AsBarbarous = K2Node_DynamicCast_AsBarbarous;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBarbarous != nullptr)
		*AsBarbarous = Parms.AsBarbarous;

}


// Function BuffObject.BuffObject_C.GetActorToBuffAs0Base
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AZero_Base_C*                As0_Base                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObject_C::GetActorToBuffAs0Base(class AZero_Base_C** As0_Base, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "GetActorToBuffAs0Base");

	Params::UBuffObject_C_GetActorToBuffAs0Base_Params Parms{};

	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (As0_Base != nullptr)
		*As0_Base = Parms.As0_Base;

}


// Function BuffObject.BuffObject_C.GetGameplayPCFromActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameplayPC_C*               Gameplay_PC                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObject_C::GetGameplayPCFromActor(class AGameplayPC_C** Gameplay_PC, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "GetGameplayPCFromActor");

	Params::UBuffObject_C_GetGameplayPCFromActor_Params Parms{};

	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Gameplay_PC != nullptr)
		*Gameplay_PC = Parms.Gameplay_PC;

}


// Function BuffObject.BuffObject_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObject_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnBuffEnd");

	Params::UBuffObject_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObject.BuffObject_C.StartBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::StartBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "StartBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.EndBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::EndBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "EndBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.InterruptBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::InterruptBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "InterruptBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnAttachToDeathStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeathShell_C*            DeathShell                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObject_C::OnAttachToDeathStatue(class ABP_DeathShell_C* DeathShell)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnAttachToDeathStatue");

	Params::UBuffObject_C_OnAttachToDeathStatue_Params Parms{};

	Parms.DeathShell = DeathShell;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObject.BuffObject_C.OnDetachFromDeathStatue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::OnDetachFromDeathStatue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnDetachFromDeathStatue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnCutsceneStart_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::OnCutsceneStart_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnCutsceneStart_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnCutsceneStart_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::OnCutsceneStart_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnCutsceneStart_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnCutsceneEnd_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::OnCutsceneEnd_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnCutsceneEnd_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnCutsceneEnd_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::OnCutsceneEnd_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnCutsceneEnd_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnEquipmentMenuPressed_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObject_C::OnEquipmentMenuPressed_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnEquipmentMenuPressed_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObject.BuffObject_C.OnEquipmentMenuPressed_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObject_C::OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "OnEquipmentMenuPressed_Set");

	Params::UBuffObject_C_OnEquipmentMenuPressed_Set_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObject.BuffObject_C.ExecuteUbergraph_BuffObject
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInterrupted                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeathShell_C*            K2Node_CustomEvent_DeathShell                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Close                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  K2Node_CustomEvent_Menu                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObject_C::ExecuteUbergraph_BuffObject(int32 EntryPoint, bool K2Node_CustomEvent_bInterrupted, class ABP_DeathShell_C* K2Node_CustomEvent_DeathShell, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_2, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObject_C", "ExecuteUbergraph_BuffObject");

	Params::UBuffObject_C_ExecuteUbergraph_BuffObject_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bInterrupted = K2Node_CustomEvent_bInterrupted;
	Parms.K2Node_CustomEvent_DeathShell = K2Node_CustomEvent_DeathShell;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC_1 = CallFunc_GetGameplayPCFromActor_Gameplay_PC_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Close = K2Node_CustomEvent_Close;
	Parms.K2Node_CustomEvent_Menu = K2Node_CustomEvent_Menu;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC_2 = CallFunc_GetGameplayPCFromActor_Gameplay_PC_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


