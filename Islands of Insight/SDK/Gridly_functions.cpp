#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Gridly.GridlyBPFunctionLibrary
// (None)

class UClass* UGridlyBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridlyBPFunctionLibrary");

	return Clss;
}


// GridlyBPFunctionLibrary Gridly.Default__GridlyBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridlyBPFunctionLibrary* UGridlyBPFunctionLibrary::GetDefaultObj()
{
	static class UGridlyBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridlyBPFunctionLibrary*>(UGridlyBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Gridly.GridlyBPFunctionLibrary.UpdateLocalizationPreview
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolyglotTextData>   PolyglotTextDatas                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGridlyBPFunctionLibrary::UpdateLocalizationPreview(TArray<struct FPolyglotTextData>& PolyglotTextDatas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridlyBPFunctionLibrary", "UpdateLocalizationPreview");

	Params::UGridlyBPFunctionLibrary_UpdateLocalizationPreview_Params Parms{};

	Parms.PolyglotTextDatas = PolyglotTextDatas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Gridly.GridlyBPFunctionLibrary.GetLocalizationPreviewCulture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGridlyBPFunctionLibrary::GetLocalizationPreviewCulture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridlyBPFunctionLibrary", "GetLocalizationPreviewCulture");

	Params::UGridlyBPFunctionLibrary_GetLocalizationPreviewCulture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Gridly.GridlyBPFunctionLibrary.EnableLocalizationPreview
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Culture                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridlyBPFunctionLibrary::EnableLocalizationPreview(const class FString& Culture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridlyBPFunctionLibrary", "EnableLocalizationPreview");

	Params::UGridlyBPFunctionLibrary_EnableLocalizationPreview_Params Parms{};

	Parms.Culture = Culture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Gridly.GridlyDataTable
// (None)

class UClass* UGridlyDataTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridlyDataTable");

	return Clss;
}


// GridlyDataTable Gridly.Default__GridlyDataTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridlyDataTable* UGridlyDataTable::GetDefaultObj()
{
	static class UGridlyDataTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridlyDataTable*>(UGridlyDataTable::StaticClass()->DefaultObject);

	return Default;
}


// Class Gridly.GridlyGameSettings
// (None)

class UClass* UGridlyGameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridlyGameSettings");

	return Clss;
}


// GridlyGameSettings Gridly.Default__GridlyGameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridlyGameSettings* UGridlyGameSettings::GetDefaultObj()
{
	static class UGridlyGameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridlyGameSettings*>(UGridlyGameSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Gridly.GridlyTask_DownloadLocalizedTexts
// (None)

class UClass* UGridlyTask_DownloadLocalizedTexts::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridlyTask_DownloadLocalizedTexts");

	return Clss;
}


// GridlyTask_DownloadLocalizedTexts Gridly.Default__GridlyTask_DownloadLocalizedTexts
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridlyTask_DownloadLocalizedTexts* UGridlyTask_DownloadLocalizedTexts::GetDefaultObj()
{
	static class UGridlyTask_DownloadLocalizedTexts* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridlyTask_DownloadLocalizedTexts*>(UGridlyTask_DownloadLocalizedTexts::StaticClass()->DefaultObject);

	return Default;
}


// Function Gridly.GridlyTask_DownloadLocalizedTexts.DownloadLocalizedTexts
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridlyTask_DownloadLocalizedTexts*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGridlyTask_DownloadLocalizedTexts* UGridlyTask_DownloadLocalizedTexts::DownloadLocalizedTexts(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridlyTask_DownloadLocalizedTexts", "DownloadLocalizedTexts");

	Params::UGridlyTask_DownloadLocalizedTexts_DownloadLocalizedTexts_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Gridly.GridlyTask_ImportDataTableFromGridly
// (None)

class UClass* UGridlyTask_ImportDataTableFromGridly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridlyTask_ImportDataTableFromGridly");

	return Clss;
}


// GridlyTask_ImportDataTableFromGridly Gridly.Default__GridlyTask_ImportDataTableFromGridly
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridlyTask_ImportDataTableFromGridly* UGridlyTask_ImportDataTableFromGridly::GetDefaultObj()
{
	static class UGridlyTask_ImportDataTableFromGridly* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridlyTask_ImportDataTableFromGridly*>(UGridlyTask_ImportDataTableFromGridly::StaticClass()->DefaultObject);

	return Default;
}


// Function Gridly.GridlyTask_ImportDataTableFromGridly.ImportDataTableFromGridly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridlyDataTable*            GridlyDataTable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridlyTask_ImportDataTableFromGridly*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGridlyTask_ImportDataTableFromGridly* UGridlyTask_ImportDataTableFromGridly::ImportDataTableFromGridly(class UObject* WorldContextObject, class UGridlyDataTable* GridlyDataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridlyTask_ImportDataTableFromGridly", "ImportDataTableFromGridly");

	Params::UGridlyTask_ImportDataTableFromGridly_ImportDataTableFromGridly_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GridlyDataTable = GridlyDataTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


