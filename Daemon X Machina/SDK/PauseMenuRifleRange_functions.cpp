#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PauseMenuRifleRange.PauseMenuRifleRange_C
// (Actor)

class UClass* APauseMenuRifleRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PauseMenuRifleRange_C");

	return Clss;
}


// PauseMenuRifleRange_C PauseMenuRifleRange.Default__PauseMenuRifleRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APauseMenuRifleRange_C* APauseMenuRifleRange_C::GetDefaultObj()
{
	static class APauseMenuRifleRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APauseMenuRifleRange_C*>(APauseMenuRifleRange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.CreateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMsn_pose_top00_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenuRifleRange_C::CreateWidget(class UMsn_pose_top00_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "CreateWidget");

	Params::APauseMenuRifleRange_C_CreateWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.DeleteYesNoPop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void APauseMenuRifleRange_C::DeleteYesNoPop(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "DeleteYesNoPop");

	Params::APauseMenuRifleRange_C_DeleteYesNoPop_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.CloseYesNoPop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::CloseYesNoPop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "CloseYesNoPop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.CreateYesNoPop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText1                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCmn_dialog_top00_C*         K2Node_DynamicCast_AsCmn_Dialog_Top_00                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYesNoPopUp_C*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenuRifleRange_C::CreateYesNoPop(class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText1, bool CallFunc_FindTextInLocalizationTable_ReturnValue1, class UCmn_dialog_top00_C* K2Node_DynamicCast_AsCmn_Dialog_Top_00, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AYesNoPopUp_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "CreateYesNoPop");

	Params::APauseMenuRifleRange_C_CreateYesNoPop_Params Parms{};

	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FindTextInLocalizationTable_OutText1 = CallFunc_FindTextInLocalizationTable_OutText1;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue1 = CallFunc_FindTextInLocalizationTable_ReturnValue1;
	Parms.K2Node_DynamicCast_AsCmn_Dialog_Top_00 = K2Node_DynamicCast_AsCmn_Dialog_Top_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.OnLoaded_BF480B204500735ECD3BC1855FCD56C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenuRifleRange_C::OnLoaded_BF480B204500735ECD3BC1855FCD56C6(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "OnLoaded_BF480B204500735ECD3BC1855FCD56C6");

	Params::APauseMenuRifleRange_C_OnLoaded_BF480B204500735ECD3BC1855FCD56C6_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.OnLoaded_562618F24BA23611EB4A90A95713F51E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenuRifleRange_C::OnLoaded_562618F24BA23611EB4A90A95713F51E(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "OnLoaded_562618F24BA23611EB4A90A95713F51E");

	Params::APauseMenuRifleRange_C_OnLoaded_562618F24BA23611EB4A90A95713F51E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.OpenYesNoPopBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::OpenYesNoPopBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "OpenYesNoPopBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.CloseYesNoPopUpBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::CloseYesNoPopUpBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "CloseYesNoPopUpBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.OpenOptionMenuBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::OpenOptionMenuBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "OpenOptionMenuBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.OnClosed_«¹¿à¤ÙóÈ_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::OnClosed__________1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "OnClosed_«¹¿à¤ÙóÈ_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.OpenManualMenuBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::OpenManualMenuBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "OpenManualMenuBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.OnOptionMenuActorExit_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APauseMenuRifleRange_C::OnOptionMenuActorExit______0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "OnOptionMenuActorExit_¤ÙóÈ_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PauseMenuRifleRange.PauseMenuRifleRange_C.ExecuteUbergraph_PauseMenuRifleRange
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_OpenPopUp_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLManual_Pop_Up                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLManualPopUp*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClosePopUp_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class ATTLOptionMenuActor*         CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APauseMenuRifleRange_C::ExecuteUbergraph_PauseMenuRifleRange(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_OpenPopUp_ReturnValue, class UClass* K2Node_CustomEvent_Loaded1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable1, class UClass* K2Node_ClassDynamicCast_AsTTLManual_Pop_Up, bool K2Node_ClassDynamicCast_bSuccess1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ATTLManualPopUp* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_ClosePopUp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class ATTLOptionMenuActor* CallFunc_FinishSpawningActor_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PauseMenuRifleRange_C", "ExecuteUbergraph_PauseMenuRifleRange");

	Params::APauseMenuRifleRange_C_ExecuteUbergraph_PauseMenuRifleRange_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_OpenPopUp_ReturnValue = CallFunc_OpenPopUp_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded1 = K2Node_CustomEvent_Loaded1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor = K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.K2Node_ClassDynamicCast_AsTTLManual_Pop_Up = K2Node_ClassDynamicCast_AsTTLManual_Pop_Up;
	Parms.K2Node_ClassDynamicCast_bSuccess1 = K2Node_ClassDynamicCast_bSuccess1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_ClosePopUp_ReturnValue = CallFunc_ClosePopUp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


