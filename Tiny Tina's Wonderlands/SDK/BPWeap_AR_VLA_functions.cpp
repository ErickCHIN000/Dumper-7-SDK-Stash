#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_AR_VLA.BPWeap_AR_VLA_C
// (Actor)

class UClass* ABPWeap_AR_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_AR_VLA_C");

	return Clss;
}


// BPWeap_AR_VLA_C BPWeap_AR_VLA.Default__BPWeap_AR_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_AR_VLA_C* ABPWeap_AR_VLA_C::GetDefaultObj()
{
	static class ABPWeap_AR_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_AR_VLA_C*>(ABPWeap_AR_VLA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.Update_Bipod_FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_VLA_C::Update_Bipod_FX(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "Update_Bipod_FX");

	Params::ABPWeap_AR_VLA_C_Update_Bipod_FX_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UpdateResourceLocks
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        ResourceLockReason                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_VLA_C::UpdateResourceLocks(bool Enable, class FName ResourceLockReason, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "UpdateResourceLocks");

	Params::ABPWeap_AR_VLA_C_UpdateResourceLocks_Params Parms{};

	Parms.Enable = Enable;
	Parms.ResourceLockReason = ResourceLockReason;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_GetInstigator_ReturnValue2 = CallFunc_GetInstigator_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnSwitchedMode
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_VLA_C::OnSwitchedMode(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "OnSwitchedMode");

	Params::ABPWeap_AR_VLA_C_OnSwitchedMode_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnPutDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_VLA_C::OnPutDown(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "OnPutDown");

	Params::ABPWeap_AR_VLA_C_OnPutDown_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_VLA_C::OnEquipped(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "OnEquipped");

	Params::ABPWeap_AR_VLA_C_OnEquipped_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_VLA_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "ReceiveEndPlay");

	Params::ABPWeap_AR_VLA_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ExecuteUbergraph_BPWeap_AR_VLA
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void ABPWeap_AR_VLA_C::ExecuteUbergraph_BPWeap_AR_VLA(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_C", "ExecuteUbergraph_BPWeap_AR_VLA");

	Params::ABPWeap_AR_VLA_C_ExecuteUbergraph_BPWeap_AR_VLA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}


