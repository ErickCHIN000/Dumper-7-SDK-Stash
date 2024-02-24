#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FogCultistNPC.FogCultistNPC_C
// (Actor)

class UClass* AFogCultistNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FogCultistNPC_C");

	return Clss;
}


// FogCultistNPC_C FogCultistNPC.Default__FogCultistNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFogCultistNPC_C* AFogCultistNPC_C::GetDefaultObj()
{
	static class AFogCultistNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFogCultistNPC_C*>(AFogCultistNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FogCultistNPC.FogCultistNPC_C.ShouldDoFirstTimeStartFog?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFogCultistNPC_C::ShouldDoFirstTimeStartFog_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "ShouldDoFirstTimeStartFog?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FogCultistNPC.FogCultistNPC_C.ShouldDoSpecialGlimpseDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AFogCultistNPC_C::ShouldDoSpecialGlimpseDialogue_(bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "ShouldDoSpecialGlimpseDialogue?");

	Params::AFogCultistNPC_C_ShouldDoSpecialGlimpseDialogue__Params Parms{};

	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot = CallFunc_CheckPlayerInventoryForItem_InventorySlot;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FogCultistNPC.FogCultistNPC_C.HasAnyBossBeenDefeated?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_AddNGLevelToID_O                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AFogCultistNPC_C::HasAnyBossBeenDefeated_(class FName CallFunc_AddNGLevelToID_O, bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "HasAnyBossBeenDefeated?");

	Params::AFogCultistNPC_C_HasAnyBossBeenDefeated__Params Parms{};

	Parms.CallFunc_AddNGLevelToID_O = CallFunc_AddNGLevelToID_O;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot = CallFunc_CheckPlayerInventoryForItem_InventorySlot;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_1 = CallFunc_CheckPlayerInventoryForItem_Success_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_1 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_2 = CallFunc_CheckPlayerInventoryForItem_Success_2;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_2 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FogCultistNPC.FogCultistNPC_C.OnNotifyEnd_774459FB4028BA8B85A3DD85B2E67D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnNotifyEnd_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnNotifyEnd_774459FB4028BA8B85A3DD85B2E67D51");

	Params::AFogCultistNPC_C_OnNotifyEnd_774459FB4028BA8B85A3DD85B2E67D51_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnNotifyBegin_774459FB4028BA8B85A3DD85B2E67D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnNotifyBegin_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnNotifyBegin_774459FB4028BA8B85A3DD85B2E67D51");

	Params::AFogCultistNPC_C_OnNotifyBegin_774459FB4028BA8B85A3DD85B2E67D51_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnInterrupted_774459FB4028BA8B85A3DD85B2E67D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnInterrupted_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnInterrupted_774459FB4028BA8B85A3DD85B2E67D51");

	Params::AFogCultistNPC_C_OnInterrupted_774459FB4028BA8B85A3DD85B2E67D51_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnBlendOut_774459FB4028BA8B85A3DD85B2E67D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnBlendOut_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnBlendOut_774459FB4028BA8B85A3DD85B2E67D51");

	Params::AFogCultistNPC_C_OnBlendOut_774459FB4028BA8B85A3DD85B2E67D51_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnCompleted_774459FB4028BA8B85A3DD85B2E67D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnCompleted_774459FB4028BA8B85A3DD85B2E67D51(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnCompleted_774459FB4028BA8B85A3DD85B2E67D51");

	Params::AFogCultistNPC_C_OnCompleted_774459FB4028BA8B85A3DD85B2E67D51_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnNotifyEnd_28554C374740FE60248772A935B2697A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnNotifyEnd_28554C374740FE60248772A935B2697A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnNotifyEnd_28554C374740FE60248772A935B2697A");

	Params::AFogCultistNPC_C_OnNotifyEnd_28554C374740FE60248772A935B2697A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnNotifyBegin_28554C374740FE60248772A935B2697A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnNotifyBegin_28554C374740FE60248772A935B2697A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnNotifyBegin_28554C374740FE60248772A935B2697A");

	Params::AFogCultistNPC_C_OnNotifyBegin_28554C374740FE60248772A935B2697A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnInterrupted_28554C374740FE60248772A935B2697A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnInterrupted_28554C374740FE60248772A935B2697A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnInterrupted_28554C374740FE60248772A935B2697A");

	Params::AFogCultistNPC_C_OnInterrupted_28554C374740FE60248772A935B2697A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnBlendOut_28554C374740FE60248772A935B2697A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnBlendOut_28554C374740FE60248772A935B2697A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnBlendOut_28554C374740FE60248772A935B2697A");

	Params::AFogCultistNPC_C_OnBlendOut_28554C374740FE60248772A935B2697A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnCompleted_28554C374740FE60248772A935B2697A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnCompleted_28554C374740FE60248772A935B2697A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnCompleted_28554C374740FE60248772A935B2697A");

	Params::AFogCultistNPC_C_OnCompleted_28554C374740FE60248772A935B2697A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnNotifyEnd_871D024149A780E83B4D5C9B6AB829F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnNotifyEnd_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnNotifyEnd_871D024149A780E83B4D5C9B6AB829F7");

	Params::AFogCultistNPC_C_OnNotifyEnd_871D024149A780E83B4D5C9B6AB829F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnNotifyBegin_871D024149A780E83B4D5C9B6AB829F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnNotifyBegin_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnNotifyBegin_871D024149A780E83B4D5C9B6AB829F7");

	Params::AFogCultistNPC_C_OnNotifyBegin_871D024149A780E83B4D5C9B6AB829F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnInterrupted_871D024149A780E83B4D5C9B6AB829F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnInterrupted_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnInterrupted_871D024149A780E83B4D5C9B6AB829F7");

	Params::AFogCultistNPC_C_OnInterrupted_871D024149A780E83B4D5C9B6AB829F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnBlendOut_871D024149A780E83B4D5C9B6AB829F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnBlendOut_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnBlendOut_871D024149A780E83B4D5C9B6AB829F7");

	Params::AFogCultistNPC_C_OnBlendOut_871D024149A780E83B4D5C9B6AB829F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnCompleted_871D024149A780E83B4D5C9B6AB829F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFogCultistNPC_C::OnCompleted_871D024149A780E83B4D5C9B6AB829F7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnCompleted_871D024149A780E83B4D5C9B6AB829F7");

	Params::AFogCultistNPC_C_OnCompleted_871D024149A780E83B4D5C9B6AB829F7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFogCultistNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FogCultistNPC.FogCultistNPC_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFogCultistNPC_C::OnOptionSelected(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnOptionSelected");

	Params::AFogCultistNPC_C_OnOptionSelected_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FogCultistNPC.FogCultistNPC_C.OnDialogueFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFogCultistNPC_C::OnDialogueFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "OnDialogueFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FogCultistNPC.FogCultistNPC_C.ContinueDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFogCultistNPC_C::ContinueDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "ContinueDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FogCultistNPC.FogCultistNPC_C.StartFogFromNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFogCultistNPC_C::StartFogFromNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "StartFogFromNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FogCultistNPC.FogCultistNPC_C.FogEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFogCultistNPC_C::FogEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "FogEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FogCultistNPC.FogCultistNPC_C.GiveGlimpse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFogCultistNPC_C::GiveGlimpse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "GiveGlimpse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FogCultistNPC.FogCultistNPC_C.ExecuteUbergraph_FogCultistNPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAnyBossBeenDefeated__ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoSpecialGlimpseDialogue__ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bYes                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShellBondingPoints_Points                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_1                                          (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItemFromPlayerInventory_Success                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default_2                                          (ReferenceParm, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItemToPlayerInventory_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItemToPlayerInventory_InventorySlot                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFogCultistNPC_C::ExecuteUbergraph_FogCultistNPC(int32 EntryPoint, bool Temp_bool_Variable, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_HasAnyBossBeenDefeated__ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, bool CallFunc_ShouldDoSpecialGlimpseDialogue__ReturnValue, bool K2Node_Event_bYes, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, int32 CallFunc_GetShellBondingPoints_Points, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_2, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, TArray<struct FDHDialogueLine>& K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3, bool Temp_bool_Variable_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default_1, bool CallFunc_RemoveItemFromPlayerInventory_Success, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4, bool Temp_bool_Variable_2, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_AddItemToPlayerInventory_Success, int32 CallFunc_AddItemToPlayerInventory_InventorySlot, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FogCultistNPC_C", "ExecuteUbergraph_FogCultistNPC");

	Params::AFogCultistNPC_C_ExecuteUbergraph_FogCultistNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_HasAnyBossBeenDefeated__ReturnValue = CallFunc_HasAnyBossBeenDefeated__ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue = CallFunc_CheckPlayerInventoryForGland_ReturnValue;
	Parms.CallFunc_ShouldDoSpecialGlimpseDialogue__ReturnValue = CallFunc_ShouldDoSpecialGlimpseDialogue__ReturnValue;
	Parms.K2Node_Event_bYes = K2Node_Event_bYes;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetShellBondingPoints_Points = CallFunc_GetShellBondingPoints_Points;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_1 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_1;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_2 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_2;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_GetShell_CurrentArmor_1 = CallFunc_GetShell_CurrentArmor_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_RemoveItemFromPlayerInventory_Success = CallFunc_RemoveItemFromPlayerInventory_Success;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_1 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_AddItemToPlayerInventory_Success = CallFunc_AddItemToPlayerInventory_Success;
	Parms.CallFunc_AddItemToPlayerInventory_InventorySlot = CallFunc_AddItemToPlayerInventory_InventorySlot;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


