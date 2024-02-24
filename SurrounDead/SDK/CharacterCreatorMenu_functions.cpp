#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterCreatorMenu.CharacterCreatorMenu_C
// (None)

class UClass* UCharacterCreatorMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterCreatorMenu_C");

	return Clss;
}


// CharacterCreatorMenu_C CharacterCreatorMenu.Default__CharacterCreatorMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterCreatorMenu_C* UCharacterCreatorMenu_C::GetDefaultObj()
{
	static class UCharacterCreatorMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterCreatorMenu_C*>(UCharacterCreatorMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.SetDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::SetDefault(class USave_Player_C* CallFunc_GetCustomSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "SetDefault");

	Params::UCharacterCreatorMenu_C_SetDefault_Params Parms{};

	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.AccessoryType3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_25                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_26                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_27                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::AccessoryType3(const class FString& String, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchString_CmpSuccess_1, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_10, bool CallFunc_SetStaticMesh_ReturnValue_11, bool CallFunc_SetStaticMesh_ReturnValue_12, bool CallFunc_SetStaticMesh_ReturnValue_13, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_14, bool CallFunc_SetStaticMesh_ReturnValue_15, bool CallFunc_SetStaticMesh_ReturnValue_16, bool CallFunc_SetStaticMesh_ReturnValue_17, bool CallFunc_SetStaticMesh_ReturnValue_18, bool CallFunc_SetStaticMesh_ReturnValue_19, bool CallFunc_SetStaticMesh_ReturnValue_20, bool CallFunc_SetStaticMesh_ReturnValue_21, bool CallFunc_SetStaticMesh_ReturnValue_22, bool CallFunc_SetStaticMesh_ReturnValue_23, bool CallFunc_SetStaticMesh_ReturnValue_24, bool CallFunc_SetStaticMesh_ReturnValue_25, bool CallFunc_SetStaticMesh_ReturnValue_26, bool CallFunc_SetStaticMesh_ReturnValue_27)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "AccessoryType3");

	Params::UCharacterCreatorMenu_C_AccessoryType3_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_5 = CallFunc_SetStaticMesh_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue_6 = CallFunc_SetStaticMesh_ReturnValue_6;
	Parms.CallFunc_SetStaticMesh_ReturnValue_7 = CallFunc_SetStaticMesh_ReturnValue_7;
	Parms.CallFunc_SetStaticMesh_ReturnValue_8 = CallFunc_SetStaticMesh_ReturnValue_8;
	Parms.CallFunc_SetStaticMesh_ReturnValue_9 = CallFunc_SetStaticMesh_ReturnValue_9;
	Parms.CallFunc_SetStaticMesh_ReturnValue_10 = CallFunc_SetStaticMesh_ReturnValue_10;
	Parms.CallFunc_SetStaticMesh_ReturnValue_11 = CallFunc_SetStaticMesh_ReturnValue_11;
	Parms.CallFunc_SetStaticMesh_ReturnValue_12 = CallFunc_SetStaticMesh_ReturnValue_12;
	Parms.CallFunc_SetStaticMesh_ReturnValue_13 = CallFunc_SetStaticMesh_ReturnValue_13;
	Parms.CallFunc_GetCustomSave_ReturnValue_1 = CallFunc_GetCustomSave_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_14 = CallFunc_SetStaticMesh_ReturnValue_14;
	Parms.CallFunc_SetStaticMesh_ReturnValue_15 = CallFunc_SetStaticMesh_ReturnValue_15;
	Parms.CallFunc_SetStaticMesh_ReturnValue_16 = CallFunc_SetStaticMesh_ReturnValue_16;
	Parms.CallFunc_SetStaticMesh_ReturnValue_17 = CallFunc_SetStaticMesh_ReturnValue_17;
	Parms.CallFunc_SetStaticMesh_ReturnValue_18 = CallFunc_SetStaticMesh_ReturnValue_18;
	Parms.CallFunc_SetStaticMesh_ReturnValue_19 = CallFunc_SetStaticMesh_ReturnValue_19;
	Parms.CallFunc_SetStaticMesh_ReturnValue_20 = CallFunc_SetStaticMesh_ReturnValue_20;
	Parms.CallFunc_SetStaticMesh_ReturnValue_21 = CallFunc_SetStaticMesh_ReturnValue_21;
	Parms.CallFunc_SetStaticMesh_ReturnValue_22 = CallFunc_SetStaticMesh_ReturnValue_22;
	Parms.CallFunc_SetStaticMesh_ReturnValue_23 = CallFunc_SetStaticMesh_ReturnValue_23;
	Parms.CallFunc_SetStaticMesh_ReturnValue_24 = CallFunc_SetStaticMesh_ReturnValue_24;
	Parms.CallFunc_SetStaticMesh_ReturnValue_25 = CallFunc_SetStaticMesh_ReturnValue_25;
	Parms.CallFunc_SetStaticMesh_ReturnValue_26 = CallFunc_SetStaticMesh_ReturnValue_26;
	Parms.CallFunc_SetStaticMesh_ReturnValue_27 = CallFunc_SetStaticMesh_ReturnValue_27;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.AccessoryType2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_25                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_26                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_27                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::AccessoryType2(const class FString& String, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchString_CmpSuccess_1, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_10, bool CallFunc_SetStaticMesh_ReturnValue_11, bool CallFunc_SetStaticMesh_ReturnValue_12, bool CallFunc_SetStaticMesh_ReturnValue_13, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_14, bool CallFunc_SetStaticMesh_ReturnValue_15, bool CallFunc_SetStaticMesh_ReturnValue_16, bool CallFunc_SetStaticMesh_ReturnValue_17, bool CallFunc_SetStaticMesh_ReturnValue_18, bool CallFunc_SetStaticMesh_ReturnValue_19, bool CallFunc_SetStaticMesh_ReturnValue_20, bool CallFunc_SetStaticMesh_ReturnValue_21, bool CallFunc_SetStaticMesh_ReturnValue_22, bool CallFunc_SetStaticMesh_ReturnValue_23, bool CallFunc_SetStaticMesh_ReturnValue_24, bool CallFunc_SetStaticMesh_ReturnValue_25, bool CallFunc_SetStaticMesh_ReturnValue_26, bool CallFunc_SetStaticMesh_ReturnValue_27)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "AccessoryType2");

	Params::UCharacterCreatorMenu_C_AccessoryType2_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_5 = CallFunc_SetStaticMesh_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue_6 = CallFunc_SetStaticMesh_ReturnValue_6;
	Parms.CallFunc_SetStaticMesh_ReturnValue_7 = CallFunc_SetStaticMesh_ReturnValue_7;
	Parms.CallFunc_SetStaticMesh_ReturnValue_8 = CallFunc_SetStaticMesh_ReturnValue_8;
	Parms.CallFunc_SetStaticMesh_ReturnValue_9 = CallFunc_SetStaticMesh_ReturnValue_9;
	Parms.CallFunc_SetStaticMesh_ReturnValue_10 = CallFunc_SetStaticMesh_ReturnValue_10;
	Parms.CallFunc_SetStaticMesh_ReturnValue_11 = CallFunc_SetStaticMesh_ReturnValue_11;
	Parms.CallFunc_SetStaticMesh_ReturnValue_12 = CallFunc_SetStaticMesh_ReturnValue_12;
	Parms.CallFunc_SetStaticMesh_ReturnValue_13 = CallFunc_SetStaticMesh_ReturnValue_13;
	Parms.CallFunc_GetCustomSave_ReturnValue_1 = CallFunc_GetCustomSave_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_14 = CallFunc_SetStaticMesh_ReturnValue_14;
	Parms.CallFunc_SetStaticMesh_ReturnValue_15 = CallFunc_SetStaticMesh_ReturnValue_15;
	Parms.CallFunc_SetStaticMesh_ReturnValue_16 = CallFunc_SetStaticMesh_ReturnValue_16;
	Parms.CallFunc_SetStaticMesh_ReturnValue_17 = CallFunc_SetStaticMesh_ReturnValue_17;
	Parms.CallFunc_SetStaticMesh_ReturnValue_18 = CallFunc_SetStaticMesh_ReturnValue_18;
	Parms.CallFunc_SetStaticMesh_ReturnValue_19 = CallFunc_SetStaticMesh_ReturnValue_19;
	Parms.CallFunc_SetStaticMesh_ReturnValue_20 = CallFunc_SetStaticMesh_ReturnValue_20;
	Parms.CallFunc_SetStaticMesh_ReturnValue_21 = CallFunc_SetStaticMesh_ReturnValue_21;
	Parms.CallFunc_SetStaticMesh_ReturnValue_22 = CallFunc_SetStaticMesh_ReturnValue_22;
	Parms.CallFunc_SetStaticMesh_ReturnValue_23 = CallFunc_SetStaticMesh_ReturnValue_23;
	Parms.CallFunc_SetStaticMesh_ReturnValue_24 = CallFunc_SetStaticMesh_ReturnValue_24;
	Parms.CallFunc_SetStaticMesh_ReturnValue_25 = CallFunc_SetStaticMesh_ReturnValue_25;
	Parms.CallFunc_SetStaticMesh_ReturnValue_26 = CallFunc_SetStaticMesh_ReturnValue_26;
	Parms.CallFunc_SetStaticMesh_ReturnValue_27 = CallFunc_SetStaticMesh_ReturnValue_27;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.AccessoryType1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_20                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_21                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_22                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_23                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_24                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_25                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_26                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_27                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::AccessoryType1(const class FString& String, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchString_CmpSuccess_1, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_10, bool CallFunc_SetStaticMesh_ReturnValue_11, bool CallFunc_SetStaticMesh_ReturnValue_12, bool CallFunc_SetStaticMesh_ReturnValue_13, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_14, bool CallFunc_SetStaticMesh_ReturnValue_15, bool CallFunc_SetStaticMesh_ReturnValue_16, bool CallFunc_SetStaticMesh_ReturnValue_17, bool CallFunc_SetStaticMesh_ReturnValue_18, bool CallFunc_SetStaticMesh_ReturnValue_19, bool CallFunc_SetStaticMesh_ReturnValue_20, bool CallFunc_SetStaticMesh_ReturnValue_21, bool CallFunc_SetStaticMesh_ReturnValue_22, bool CallFunc_SetStaticMesh_ReturnValue_23, bool CallFunc_SetStaticMesh_ReturnValue_24, bool CallFunc_SetStaticMesh_ReturnValue_25, bool CallFunc_SetStaticMesh_ReturnValue_26, bool CallFunc_SetStaticMesh_ReturnValue_27)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "AccessoryType1");

	Params::UCharacterCreatorMenu_C_AccessoryType1_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_5 = CallFunc_SetStaticMesh_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue_6 = CallFunc_SetStaticMesh_ReturnValue_6;
	Parms.CallFunc_SetStaticMesh_ReturnValue_7 = CallFunc_SetStaticMesh_ReturnValue_7;
	Parms.CallFunc_SetStaticMesh_ReturnValue_8 = CallFunc_SetStaticMesh_ReturnValue_8;
	Parms.CallFunc_SetStaticMesh_ReturnValue_9 = CallFunc_SetStaticMesh_ReturnValue_9;
	Parms.CallFunc_SetStaticMesh_ReturnValue_10 = CallFunc_SetStaticMesh_ReturnValue_10;
	Parms.CallFunc_SetStaticMesh_ReturnValue_11 = CallFunc_SetStaticMesh_ReturnValue_11;
	Parms.CallFunc_SetStaticMesh_ReturnValue_12 = CallFunc_SetStaticMesh_ReturnValue_12;
	Parms.CallFunc_SetStaticMesh_ReturnValue_13 = CallFunc_SetStaticMesh_ReturnValue_13;
	Parms.CallFunc_GetCustomSave_ReturnValue_1 = CallFunc_GetCustomSave_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_14 = CallFunc_SetStaticMesh_ReturnValue_14;
	Parms.CallFunc_SetStaticMesh_ReturnValue_15 = CallFunc_SetStaticMesh_ReturnValue_15;
	Parms.CallFunc_SetStaticMesh_ReturnValue_16 = CallFunc_SetStaticMesh_ReturnValue_16;
	Parms.CallFunc_SetStaticMesh_ReturnValue_17 = CallFunc_SetStaticMesh_ReturnValue_17;
	Parms.CallFunc_SetStaticMesh_ReturnValue_18 = CallFunc_SetStaticMesh_ReturnValue_18;
	Parms.CallFunc_SetStaticMesh_ReturnValue_19 = CallFunc_SetStaticMesh_ReturnValue_19;
	Parms.CallFunc_SetStaticMesh_ReturnValue_20 = CallFunc_SetStaticMesh_ReturnValue_20;
	Parms.CallFunc_SetStaticMesh_ReturnValue_21 = CallFunc_SetStaticMesh_ReturnValue_21;
	Parms.CallFunc_SetStaticMesh_ReturnValue_22 = CallFunc_SetStaticMesh_ReturnValue_22;
	Parms.CallFunc_SetStaticMesh_ReturnValue_23 = CallFunc_SetStaticMesh_ReturnValue_23;
	Parms.CallFunc_SetStaticMesh_ReturnValue_24 = CallFunc_SetStaticMesh_ReturnValue_24;
	Parms.CallFunc_SetStaticMesh_ReturnValue_25 = CallFunc_SetStaticMesh_ReturnValue_25;
	Parms.CallFunc_SetStaticMesh_ReturnValue_26 = CallFunc_SetStaticMesh_ReturnValue_26;
	Parms.CallFunc_SetStaticMesh_ReturnValue_27 = CallFunc_SetStaticMesh_ReturnValue_27;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.MouthType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::MouthType(const class FString& String, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchString_CmpSuccess_1, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "MouthType");

	Params::UCharacterCreatorMenu_C_MouthType_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_5 = CallFunc_SetStaticMesh_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue_6 = CallFunc_SetStaticMesh_ReturnValue_6;
	Parms.CallFunc_SetStaticMesh_ReturnValue_7 = CallFunc_SetStaticMesh_ReturnValue_7;
	Parms.CallFunc_SetStaticMesh_ReturnValue_8 = CallFunc_SetStaticMesh_ReturnValue_8;
	Parms.CallFunc_SetStaticMesh_ReturnValue_9 = CallFunc_SetStaticMesh_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.Sex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::Sex(const class FString& String, bool K2Node_SwitchString_CmpSuccess, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "Sex");

	Params::UCharacterCreatorMenu_C_Sex_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.EyebrowsType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::EyebrowsType(const class FString& String, bool K2Node_SwitchString_CmpSuccess, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "EyebrowsType");

	Params::UCharacterCreatorMenu_C_EyebrowsType_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BeardColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BeardColor(const class FString& String, bool K2Node_SwitchString_CmpSuccess, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BeardColor");

	Params::UCharacterCreatorMenu_C_BeardColor_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BeardType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BeardType(const class FString& String, bool K2Node_SwitchString_CmpSuccess, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BeardType");

	Params::UCharacterCreatorMenu_C_BeardType_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_5 = CallFunc_SetStaticMesh_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue_6 = CallFunc_SetStaticMesh_ReturnValue_6;
	Parms.CallFunc_SetStaticMesh_ReturnValue_7 = CallFunc_SetStaticMesh_ReturnValue_7;
	Parms.CallFunc_SetStaticMesh_ReturnValue_8 = CallFunc_SetStaticMesh_ReturnValue_8;
	Parms.CallFunc_SetStaticMesh_ReturnValue_9 = CallFunc_SetStaticMesh_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.HairColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::HairColor(const class FString& String, bool K2Node_SwitchString_CmpSuccess, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "HairColor");

	Params::UCharacterCreatorMenu_C_HairColor_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.HairType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::HairType(const class FString& String, bool K2Node_SwitchString_CmpSuccess, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, bool CallFunc_SetStaticMesh_ReturnValue_7, bool CallFunc_SetStaticMesh_ReturnValue_8, bool CallFunc_SetStaticMesh_ReturnValue_9, bool CallFunc_SetStaticMesh_ReturnValue_10, bool CallFunc_SetStaticMesh_ReturnValue_11, bool CallFunc_SetStaticMesh_ReturnValue_12, bool CallFunc_SetStaticMesh_ReturnValue_13, bool CallFunc_SetStaticMesh_ReturnValue_14, bool CallFunc_SetStaticMesh_ReturnValue_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "HairType");

	Params::UCharacterCreatorMenu_C_HairType_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_4 = CallFunc_SetStaticMesh_ReturnValue_4;
	Parms.CallFunc_SetStaticMesh_ReturnValue_5 = CallFunc_SetStaticMesh_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue_6 = CallFunc_SetStaticMesh_ReturnValue_6;
	Parms.CallFunc_SetStaticMesh_ReturnValue_7 = CallFunc_SetStaticMesh_ReturnValue_7;
	Parms.CallFunc_SetStaticMesh_ReturnValue_8 = CallFunc_SetStaticMesh_ReturnValue_8;
	Parms.CallFunc_SetStaticMesh_ReturnValue_9 = CallFunc_SetStaticMesh_ReturnValue_9;
	Parms.CallFunc_SetStaticMesh_ReturnValue_10 = CallFunc_SetStaticMesh_ReturnValue_10;
	Parms.CallFunc_SetStaticMesh_ReturnValue_11 = CallFunc_SetStaticMesh_ReturnValue_11;
	Parms.CallFunc_SetStaticMesh_ReturnValue_12 = CallFunc_SetStaticMesh_ReturnValue_12;
	Parms.CallFunc_SetStaticMesh_ReturnValue_13 = CallFunc_SetStaticMesh_ReturnValue_13;
	Parms.CallFunc_SetStaticMesh_ReturnValue_14 = CallFunc_SetStaticMesh_ReturnValue_14;
	Parms.CallFunc_SetStaticMesh_ReturnValue_15 = CallFunc_SetStaticMesh_ReturnValue_15;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.SkinColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::SkinColor(const class FString& String, bool K2Node_SwitchString_CmpSuccess, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "SkinColor");

	Params::UCharacterCreatorMenu_C_SkinColor_Params Parms{};

	Parms.String = String;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterCreatorMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCharacterCreatorMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterCreatorMenu_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_ComboBoxString_60_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_ComboBoxString_60_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_ComboBoxString_60_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_ComboBoxString_60_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownSkinColor_2_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownSkinColor_2_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownSkinColor_2_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownSkinColor_2_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownBeardColor_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownBeardColor_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownBeardColor_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownBeardColor_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownBeard_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownBeard_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownBeard_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownBeard_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownHairType_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownHairType_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownHairType_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownHairType_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_EditableTextBox_Forename_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_EditableTextBox_Forename_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_EditableTextBox_Forename_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_EditableTextBox_Forename_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_EditableTextBox_Surname_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_EditableTextBox_Surname_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_EditableTextBox_Surname_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_EditableTextBox_Surname_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_EditableTextBox_Age_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_EditableTextBox_Age_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_EditableTextBox_Age_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_EditableTextBox_Age_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownEyebrows_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownEyebrows_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownEyebrows_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownEyebrows_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownOccupation_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownOccupation_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownOccupation_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownOccupation_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownOccupation_1_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownOccupation_1_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownOccupation_1_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownOccupation_1_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_ContinueButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_ContinueButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_ContinueButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_BackButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_BackButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_BackButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_ContinueButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_ContinueButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_ContinueButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.AnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterCreatorMenu_C::AnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "AnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownBeard_1_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownBeard_1_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownBeard_1_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownBeard_1_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownAccessory1_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownAccessory1_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownAccessory1_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownAccessory1_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownAccessory2_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownAccessory2_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownAccessory2_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownAccessory2_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.BndEvt__CharacterCreatorMenu_DropDownAccessory3_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::BndEvt__CharacterCreatorMenu_DropDownAccessory3_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "BndEvt__CharacterCreatorMenu_DropDownAccessory3_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");

	Params::UCharacterCreatorMenu_C_BndEvt__CharacterCreatorMenu_DropDownAccessory3_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCreatorMenu.CharacterCreatorMenu_C.ExecuteUbergraph_CharacterCreatorMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNewGameDifficultySelectionPage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMenuWidget_C*               CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_11                       (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_10                       (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_9                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_8                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_7                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_6                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindOptionIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ALevelSequenceActor*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCharacterCreatorMenu_C::ExecuteUbergraph_CharacterCreatorMenu(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UNewGameDifficultySelectionPage_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UMenuWidget_C* CallFunc_Create_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_11, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_11, const class FString& K2Node_ComponentBoundEvent_SelectedItem_10, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_10, const class FString& K2Node_ComponentBoundEvent_SelectedItem_9, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_9, const class FString& K2Node_ComponentBoundEvent_SelectedItem_8, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_8, const class FString& K2Node_ComponentBoundEvent_SelectedItem_7, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_7, class FText K2Node_ComponentBoundEvent_Text_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_IsNumeric_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_6, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_6, const class FString& K2Node_ComponentBoundEvent_SelectedItem_5, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_5, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FindOptionIndex_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_4, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, TArray<class ALevelSequenceActor*>& CallFunc_GetAllActorsOfClass_OutActors, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_3, class ALevelSequenceActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_2, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCreatorMenu_C", "ExecuteUbergraph_CharacterCreatorMenu");

	Params::UCharacterCreatorMenu_C_ExecuteUbergraph_CharacterCreatorMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_11 = K2Node_ComponentBoundEvent_SelectedItem_11;
	Parms.K2Node_ComponentBoundEvent_SelectionType_11 = K2Node_ComponentBoundEvent_SelectionType_11;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_10 = K2Node_ComponentBoundEvent_SelectedItem_10;
	Parms.K2Node_ComponentBoundEvent_SelectionType_10 = K2Node_ComponentBoundEvent_SelectionType_10;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_9 = K2Node_ComponentBoundEvent_SelectedItem_9;
	Parms.K2Node_ComponentBoundEvent_SelectionType_9 = K2Node_ComponentBoundEvent_SelectionType_9;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_8 = K2Node_ComponentBoundEvent_SelectedItem_8;
	Parms.K2Node_ComponentBoundEvent_SelectionType_8 = K2Node_ComponentBoundEvent_SelectionType_8;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_7 = K2Node_ComponentBoundEvent_SelectedItem_7;
	Parms.K2Node_ComponentBoundEvent_SelectionType_7 = K2Node_ComponentBoundEvent_SelectionType_7;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_6 = K2Node_ComponentBoundEvent_SelectedItem_6;
	Parms.K2Node_ComponentBoundEvent_SelectionType_6 = K2Node_ComponentBoundEvent_SelectionType_6;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_5 = K2Node_ComponentBoundEvent_SelectedItem_5;
	Parms.K2Node_ComponentBoundEvent_SelectionType_5 = K2Node_ComponentBoundEvent_SelectionType_5;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FindOptionIndex_ReturnValue = CallFunc_FindOptionIndex_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_4 = K2Node_ComponentBoundEvent_SelectedItem_4;
	Parms.K2Node_ComponentBoundEvent_SelectionType_4 = K2Node_ComponentBoundEvent_SelectionType_4;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_3 = K2Node_ComponentBoundEvent_SelectedItem_3;
	Parms.K2Node_ComponentBoundEvent_SelectionType_3 = K2Node_ComponentBoundEvent_SelectionType_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_2 = K2Node_ComponentBoundEvent_SelectedItem_2;
	Parms.K2Node_ComponentBoundEvent_SelectionType_2 = K2Node_ComponentBoundEvent_SelectionType_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.K2Node_ComponentBoundEvent_SelectionType_1 = K2Node_ComponentBoundEvent_SelectionType_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;

	UObject::ProcessEvent(Func, &Parms);

}

}


