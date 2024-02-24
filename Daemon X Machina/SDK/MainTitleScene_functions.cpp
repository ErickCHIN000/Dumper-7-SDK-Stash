#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainTitleScene.MainTitleScene_C
// (Actor)

class UClass* AMainTitleScene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainTitleScene_C");

	return Clss;
}


// MainTitleScene_C MainTitleScene.Default__MainTitleScene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainTitleScene_C* AMainTitleScene_C::GetDefaultObj()
{
	static class AMainTitleScene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainTitleScene_C*>(AMainTitleScene_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainTitleScene.MainTitleScene_C.SpawnRewardPopupBP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLRewardPopUp*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARewardPopUp_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ATTLRewardPopUp* AMainTitleScene_C::SpawnRewardPopupBP(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARewardPopUp_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTitleScene_C", "SpawnRewardPopupBP");

	Params::AMainTitleScene_C_SpawnRewardPopupBP_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainTitleScene.MainTitleScene_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainTitleScene_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTitleScene_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTitleScene.MainTitleScene_C.OnLoaded_B0377E7C48020181A1FE7EB2ADE60EA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainTitleScene_C::OnLoaded_B0377E7C48020181A1FE7EB2ADE60EA7(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTitleScene_C", "OnLoaded_B0377E7C48020181A1FE7EB2ADE60EA7");

	Params::AMainTitleScene_C_OnLoaded_B0377E7C48020181A1FE7EB2ADE60EA7_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTitleScene.MainTitleScene_C.OpenOptionMenuBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainTitleScene_C::OpenOptionMenuBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTitleScene_C", "OpenOptionMenuBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTitleScene.MainTitleScene_C.ExecuteUbergraph_MainTitleScene
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMainTitleScene_C::ExecuteUbergraph_MainTitleScene(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTitleScene_C", "ExecuteUbergraph_MainTitleScene");

	Params::AMainTitleScene_C_ExecuteUbergraph_MainTitleScene_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor = K2Node_ClassDynamicCast_AsTTLOption_Menu_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


