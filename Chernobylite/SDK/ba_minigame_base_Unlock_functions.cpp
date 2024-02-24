#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_minigame_base_Unlock.ba_minigame_base_Unlock_C
// (Actor)

class UClass* Aba_minigame_base_Unlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_minigame_base_Unlock_C");

	return Clss;
}


// ba_minigame_base_Unlock_C ba_minigame_base_Unlock.Default__ba_minigame_base_Unlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_minigame_base_Unlock_C* Aba_minigame_base_Unlock_C::GetDefaultObj()
{
	static class Aba_minigame_base_Unlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_minigame_base_Unlock_C*>(Aba_minigame_base_Unlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_base_Unlock_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.InternalLeave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainingTime_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_minigame_base_Unlock_C::InternalLeave(int32 CallFunc_Multiply_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_GetRemainingTime_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "InternalLeave");

	Params::Aba_minigame_base_Unlock_C_InternalLeave_Params Parms{};

	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetRemainingTime_ReturnValue = CallFunc_GetRemainingTime_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.Won
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_base_Unlock_C::Won()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "Won");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.InternalWin
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_base_Unlock_C::InternalWin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "InternalWin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.RestorePlayerControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_minigame_base_Unlock_C::RestorePlayerControl(bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_Select_Default, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "RestorePlayerControl");

	Params::Aba_minigame_base_Unlock_C_RestorePlayerControl_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.StartPuzzle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_base_Unlock_C::StartPuzzle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "StartPuzzle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.InternalStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_minigame_base_Unlock_C::InternalStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "InternalStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.ExecuteUbergraph_ba_minigame_base_Unlock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_minigame_base_Unlock_C::ExecuteUbergraph_ba_minigame_base_Unlock(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "ExecuteUbergraph_ba_minigame_base_Unlock");

	Params::Aba_minigame_base_Unlock_C_ExecuteUbergraph_ba_minigame_base_Unlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_minigame_base_Unlock.ba_minigame_base_Unlock_C.MinigameResult__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasWon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_minigame_base_Unlock_C::MinigameResult__DelegateSignature(bool WasWon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_minigame_base_Unlock_C", "MinigameResult__DelegateSignature");

	Params::Aba_minigame_base_Unlock_C_MinigameResult__DelegateSignature_Params Parms{};

	Parms.WasWon = WasWon;

	UObject::ProcessEvent(Func, &Parms);

}

}


