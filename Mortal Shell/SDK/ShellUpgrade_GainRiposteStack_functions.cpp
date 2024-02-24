#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C
// (None)

class UClass* UShellUpgrade_GainRiposteStack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgrade_GainRiposteStack_C");

	return Clss;
}


// ShellUpgrade_GainRiposteStack_C ShellUpgrade_GainRiposteStack.Default__ShellUpgrade_GainRiposteStack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgrade_GainRiposteStack_C* UShellUpgrade_GainRiposteStack_C::GetDefaultObj()
{
	static class UShellUpgrade_GainRiposteStack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgrade_GainRiposteStack_C*>(UShellUpgrade_GainRiposteStack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.IncrementStack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_OldStackValue                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void UShellUpgrade_GainRiposteStack_C::IncrementStack(int32 Local_OldStackValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "IncrementStack");

	Params::UShellUpgrade_GainRiposteStack_C_IncrementStack_Params Parms{};

	Parms.Local_OldStackValue = Local_OldStackValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.ApplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::ApplyBuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "ApplyBuff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.IsDmgTypeValid?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      DmgType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UShellUpgrade_GainRiposteStack_C::IsDmgTypeValid_(class UClass* DmgType, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "IsDmgTypeValid?");

	Params::UShellUpgrade_GainRiposteStack_C_IsDmgTypeValid__Params Parms{};

	Parms.DmgType = DmgType;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_3 = CallFunc_EqualEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.AddInitialIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::AddInitialIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "AddInitialIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnSuccessfulRiposte_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnSuccessfulRiposte_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnSuccessfulRiposte_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnGettingDamagedWithDamageType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_GainRiposteStack_C::OnGettingDamagedWithDamageType(class UClass* DamageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnGettingDamagedWithDamageType");

	Params::UShellUpgrade_GainRiposteStack_C_OnGettingDamagedWithDamageType_Params Parms{};

	Parms.DamageType = DamageType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnGettingDamaged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnGettingDamaged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnGettingDamaged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnGettingDamaged_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnGettingDamaged_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnGettingDamaged_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.RemoveIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::RemoveIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "RemoveIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnAbilityGained
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnAbilityGained()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnAbilityGained");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnAbilityLost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnAbilityLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnAbilityLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnPlayerDeath_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnPlayerDeath_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnPlayerDeath_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.ShouldRemoveBuff?
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::ShouldRemoveBuff_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "ShouldRemoveBuff?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnPlayerDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnPlayerDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnPlayerDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnPlayerDeath_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::OnPlayerDeath_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnPlayerDeath_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.UpdateStackNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgrade_GainRiposteStack_C::UpdateStackNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "UpdateStackNumber");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.OnSuccessfulRiposte
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           RiposteType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            RipostedChar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgrade_GainRiposteStack_C::OnSuccessfulRiposte(enum class ERiposteTypes RiposteType, class ABaseCharacter_C* RipostedChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "OnSuccessfulRiposte");

	Params::UShellUpgrade_GainRiposteStack_C_OnSuccessfulRiposte_Params Parms{};

	Parms.RiposteType = RiposteType;
	Parms.RipostedChar = RipostedChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C.ExecuteUbergraph_ShellUpgrade_GainRiposteStack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageNotifierComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_DamageType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDmgTypeValid__ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageNotifierComponent_C*  CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class ERiposteTypes           K2Node_CustomEvent_RiposteType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_RipostedChar                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgrade_GainRiposteStack_C::ExecuteUbergraph_ShellUpgrade_GainRiposteStack(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UClass* K2Node_CustomEvent_DamageType, bool CallFunc_IsDmgTypeValid__ReturnValue, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ERiposteTypes K2Node_CustomEvent_RiposteType, class ABaseCharacter_C* K2Node_CustomEvent_RipostedChar, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgrade_GainRiposteStack_C", "ExecuteUbergraph_ShellUpgrade_GainRiposteStack");

	Params::UShellUpgrade_GainRiposteStack_C_ExecuteUbergraph_ShellUpgrade_GainRiposteStack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.CallFunc_IsDmgTypeValid__ReturnValue = CallFunc_IsDmgTypeValid__ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_RiposteType = K2Node_CustomEvent_RiposteType;
	Parms.K2Node_CustomEvent_RipostedChar = K2Node_CustomEvent_RipostedChar;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


