#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Building_Path.wid_BuildSystem_Building_Path_C
// (None)

class UClass* UWid_BuildSystem_Building_Path_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Building_Path_C");

	return Clss;
}


// wid_BuildSystem_Building_Path_C wid_BuildSystem_Building_Path.Default__wid_BuildSystem_Building_Path_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Building_Path_C* UWid_BuildSystem_Building_Path_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Building_Path_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Building_Path_C*>(UWid_BuildSystem_Building_Path_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Building_Path.wid_BuildSystem_Building_Path_C.Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      RowPath                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Path                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_BuildSystemGetReadablePath_ReturnValue                  (None)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_BuildSystem_Building_Path_C::Update(TArray<class FName>& Array, const class FString& RowPath, const class FString& Path, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& Temp_string_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FText CallFunc_BuildSystemGetReadablePath_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Building_Path_C", "Update");

	Params::UWid_BuildSystem_Building_Path_C_Update_Params Parms{};

	Parms.Array = Array;
	Parms.RowPath = RowPath;
	Parms.Path = Path;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_BuildSystemGetReadablePath_ReturnValue = CallFunc_BuildSystemGetReadablePath_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


