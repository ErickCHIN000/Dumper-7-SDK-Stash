#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C
// (Actor)

class UClass* ASEQ_Master_CharacterCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SEQ_Master_CharacterCustomization_C");

	return Clss;
}


// SEQ_Master_CharacterCustomization_C SEQ_Master_CharacterCustomization.Default__SEQ_Master_CharacterCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASEQ_Master_CharacterCustomization_C* ASEQ_Master_CharacterCustomization_C::GetDefaultObj()
{
	static class ASEQ_Master_CharacterCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASEQ_Master_CharacterCustomization_C*>(ASEQ_Master_CharacterCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.PlaySEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_CharacterCustomization_C::PlaySEQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "PlaySEQ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.Camera Form
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_CharacterCustomization_C::Camera_Form()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "Camera Form");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.KillSEQ
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Skip_Inventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASEQ_Master_CharacterCustomization_C::KillSEQ(bool Skip_Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "KillSEQ");

	Params::ASEQ_Master_CharacterCustomization_C_KillSEQ_Params Parms{};

	Parms.Skip_Inventory = Skip_Inventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.Camera Skin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_CharacterCustomization_C::Camera_Skin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "Camera Skin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.Camera Head Morph
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_CharacterCustomization_C::Camera_Head_Morph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "Camera Head Morph");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.Camera Hair
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_CharacterCustomization_C::Camera_Hair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "Camera Hair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.Camera Body Morph
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_CharacterCustomization_C::Camera_Body_Morph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "Camera Body Morph");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.Camera Cock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASEQ_Master_CharacterCustomization_C::Camera_Cock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "Camera Cock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C.ExecuteUbergraph_SEQ_Master_CharacterCustomization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_CharacterCustomization_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Skip_Inventory                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASEQ_Master_CharacterCustomization_C::ExecuteUbergraph_SEQ_Master_CharacterCustomization(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_InGame_C* CallFunc_Array_Get_Item, class UWB_CharacterCustomization_C* CallFunc_Create_ReturnValue, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool K2Node_CustomEvent_Skip_Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_IsClosed_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_3, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_4, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_5, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_Master_CharacterCustomization_C", "ExecuteUbergraph_SEQ_Master_CharacterCustomization");

	Params::ASEQ_Master_CharacterCustomization_C_ExecuteUbergraph_SEQ_Master_CharacterCustomization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_CustomEvent_Skip_Inventory = K2Node_CustomEvent_Skip_Inventory;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = CallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_2 = CallFunc_GetSequencePlayer_ReturnValue_2;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_3 = CallFunc_GetSequencePlayer_ReturnValue_3;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_4 = CallFunc_GetSequencePlayer_ReturnValue_4;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_5 = CallFunc_GetSequencePlayer_ReturnValue_5;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_1 = CallFunc_Get_AC_Inventory_AC_Inventory_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_2 = CallFunc_Get_AC_Inventory_AC_Inventory_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


