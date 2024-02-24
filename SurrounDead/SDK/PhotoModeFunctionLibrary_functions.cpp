#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C
// (None)

class UClass* UPhotoModeFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhotoModeFunctionLibrary_C");

	return Clss;
}


// PhotoModeFunctionLibrary_C PhotoModeFunctionLibrary.Default__PhotoModeFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhotoModeFunctionLibrary_C* UPhotoModeFunctionLibrary_C::GetDefaultObj()
{
	static class UPhotoModeFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhotoModeFunctionLibrary_C*>(UPhotoModeFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.Hide HUD When Using Photo Mode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        If_Not_Using_Photo_Mode_Set_This_Widget_As                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhotoModeComponent_C*       PhotoModeComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Using_Photo_Mode_or_Gallery_                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::Hide_HUD_When_Using_Photo_Mode(enum class ESlateVisibility If_Not_Using_Photo_Mode_Set_This_Widget_As, class UPhotoModeComponent_C* PhotoModeComponent, class UObject* __WorldContext, enum class ESlateVisibility* Visibility, bool* Using_Photo_Mode_or_Gallery_, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "Hide HUD When Using Photo Mode");

	Params::UPhotoModeFunctionLibrary_C_Hide_HUD_When_Using_Photo_Mode_Params Parms{};

	Parms.If_Not_Using_Photo_Mode_Set_This_Widget_As = If_Not_Using_Photo_Mode_Set_This_Widget_As;
	Parms.PhotoModeComponent = PhotoModeComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

	if (Using_Photo_Mode_or_Gallery_ != nullptr)
		*Using_Photo_Mode_or_Gallery_ = Parms.Using_Photo_Mode_or_Gallery_;

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.SaveAllPhotos
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPhotosData>         SaveNewPhoto                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhotosDataSaveGame_C*       SaveGameReference                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhotosDataSaveGame_C*       CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhotosDataSaveGame_C*       K2Node_DynamicCast_AsPhotos_Data_Save_Game                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::SaveAllPhotos(TArray<struct FPhotosData>& SaveNewPhoto, class UObject* __WorldContext, class UPhotosDataSaveGame_C* SaveGameReference, bool CallFunc_SaveGameToSlot_ReturnValue, class UPhotosDataSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UPhotosDataSaveGame_C* K2Node_DynamicCast_AsPhotos_Data_Save_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "SaveAllPhotos");

	Params::UPhotoModeFunctionLibrary_C_SaveAllPhotos_Params Parms{};

	Parms.SaveNewPhoto = SaveNewPhoto;
	Parms.__WorldContext = __WorldContext;
	Parms.SaveGameReference = SaveGameReference;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPhotos_Data_Save_Game = K2Node_DynamicCast_AsPhotos_Data_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.MakeThumbnail
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     World_Context_Object__Self_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Player_Controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Screenshot_Folder_Path                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                   Resolution__X_and_Y_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PhotoName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Full_Thumbnail_Path                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BaseThumbnailName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Resolution                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      FullFilePath                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     WorldContextObject                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      FolderPath                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeDirectoryName_OutPath                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EndsWith_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::MakeThumbnail(class UObject* World_Context_Object__Self_, class APlayerController* Player_Controller, const class FString& Screenshot_Folder_Path, const struct FIntPoint& Resolution__X_and_Y_, const class FString& PhotoName, class UObject* __WorldContext, class FString* Full_Thumbnail_Path, class FString* BaseThumbnailName, const class FString& Resolution, const class FString& FullFilePath, class UObject* WorldContextObject, const class FString& FolderPath, class APlayerController* PlayerController, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_NormalizeDirectoryName_OutPath, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_EndsWith_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_GetBaseFilename_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "MakeThumbnail");

	Params::UPhotoModeFunctionLibrary_C_MakeThumbnail_Params Parms{};

	Parms.World_Context_Object__Self_ = World_Context_Object__Self_;
	Parms.Player_Controller = Player_Controller;
	Parms.Screenshot_Folder_Path = Screenshot_Folder_Path;
	Parms.Resolution__X_and_Y_ = Resolution__X_and_Y_;
	Parms.PhotoName = PhotoName;
	Parms.__WorldContext = __WorldContext;
	Parms.Resolution = Resolution;
	Parms.FullFilePath = FullFilePath;
	Parms.WorldContextObject = WorldContextObject;
	Parms.FolderPath = FolderPath;
	Parms.PlayerController = PlayerController;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_NormalizeDirectoryName_OutPath = CallFunc_NormalizeDirectoryName_OutPath;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_EndsWith_ReturnValue = CallFunc_EndsWith_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Full_Thumbnail_Path != nullptr)
		*Full_Thumbnail_Path = std::move(Parms.Full_Thumbnail_Path);

	if (BaseThumbnailName != nullptr)
		*BaseThumbnailName = std::move(Parms.BaseThumbnailName);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.LoadPhotos
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               SaveGameIsValid_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPhotosData>         PhotosData                                                       (Parm, OutParm)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhotosDataSaveGame_C*       K2Node_DynamicCast_AsPhotos_Data_Save_Game                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::LoadPhotos(class UObject* __WorldContext, bool* SaveGameIsValid_, TArray<struct FPhotosData>* PhotosData, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UPhotosDataSaveGame_C* K2Node_DynamicCast_AsPhotos_Data_Save_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "LoadPhotos");

	Params::UPhotoModeFunctionLibrary_C_LoadPhotos_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPhotos_Data_Save_Game = K2Node_DynamicCast_AsPhotos_Data_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveGameIsValid_ != nullptr)
		*SaveGameIsValid_ = Parms.SaveGameIsValid_;

	if (PhotosData != nullptr)
		*PhotosData = std::move(Parms.PhotosData);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.SavePhoto
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotosData                 SaveNewPhoto                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhotosDataSaveGame_C*       SaveGameReference                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhotosDataSaveGame_C*       CallFunc_CreateSaveGameObject_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhotosDataSaveGame_C*       K2Node_DynamicCast_AsPhotos_Data_Save_Game                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::SavePhoto(const struct FPhotosData& SaveNewPhoto, class UObject* __WorldContext, class UPhotosDataSaveGame_C* SaveGameReference, bool CallFunc_SaveGameToSlot_ReturnValue, class UPhotosDataSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UPhotosDataSaveGame_C* K2Node_DynamicCast_AsPhotos_Data_Save_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "SavePhoto");

	Params::UPhotoModeFunctionLibrary_C_SavePhoto_Params Parms{};

	Parms.SaveNewPhoto = SaveNewPhoto;
	Parms.__WorldContext = __WorldContext;
	Parms.SaveGameReference = SaveGameReference;
	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;
	Parms.CallFunc_CreateSaveGameObject_ReturnValue = CallFunc_CreateSaveGameObject_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsPhotos_Data_Save_Game = K2Node_DynamicCast_AsPhotos_Data_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.NormalizeScreenshotPath
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Folder_Path                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Normalized_Path                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      FolderPath                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeDirectoryName_OutPath                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EndsWith_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::NormalizeScreenshotPath(const class FString& Folder_Path, class UObject* __WorldContext, class FString* Normalized_Path, const class FString& FolderPath, const class FString& CallFunc_NormalizeDirectoryName_OutPath, bool CallFunc_EndsWith_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "NormalizeScreenshotPath");

	Params::UPhotoModeFunctionLibrary_C_NormalizeScreenshotPath_Params Parms{};

	Parms.Folder_Path = Folder_Path;
	Parms.__WorldContext = __WorldContext;
	Parms.FolderPath = FolderPath;
	Parms.CallFunc_NormalizeDirectoryName_OutPath = CallFunc_NormalizeDirectoryName_OutPath;
	Parms.CallFunc_EndsWith_ReturnValue = CallFunc_EndsWith_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Normalized_Path != nullptr)
		*Normalized_Path = std::move(Parms.Normalized_Path);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.Get Screenshot File
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      FullFilePath                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  TwoD_Image                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Base_Filename                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Full_File_Path                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FileExists_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_ImportFileAsTexture2D_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::Get_Screenshot_File(class UObject* WorldContextObject, const class FString& FullFilePath, class UObject* __WorldContext, bool* IsValid_, class UTexture2D** TwoD_Image, class FString* Base_Filename, class FString* Full_File_Path, bool CallFunc_FileExists_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, class UTexture2D* CallFunc_ImportFileAsTexture2D_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "Get Screenshot File");

	Params::UPhotoModeFunctionLibrary_C_Get_Screenshot_File_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FullFilePath = FullFilePath;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FileExists_ReturnValue = CallFunc_FileExists_ReturnValue;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_ImportFileAsTexture2D_ReturnValue = CallFunc_ImportFileAsTexture2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid_ != nullptr)
		*IsValid_ = Parms.IsValid_;

	if (TwoD_Image != nullptr)
		*TwoD_Image = Parms.TwoD_Image;

	if (Base_Filename != nullptr)
		*Base_Filename = std::move(Parms.Base_Filename);

	if (Full_File_Path != nullptr)
		*Full_File_Path = std::move(Parms.Full_File_Path);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.Directory Path Correction
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Use_Custom_Path_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Custom_Path                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Corrected_Path                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ScreenShotDir_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::Directory_Path_Correction(bool Use_Custom_Path_, const class FString& Custom_Path, class UObject* __WorldContext, class FString* Corrected_Path, const class FString& CallFunc_ScreenShotDir_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "Directory Path Correction");

	Params::UPhotoModeFunctionLibrary_C_Directory_Path_Correction_Params Parms{};

	Parms.Use_Custom_Path_ = Use_Custom_Path_;
	Parms.Custom_Path = Custom_Path;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_ScreenShotDir_ReturnValue = CallFunc_ScreenShotDir_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Corrected_Path != nullptr)
		*Corrected_Path = std::move(Parms.Corrected_Path);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.Get Default Screen Resolution
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   Resolution__X_and_Y_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::Get_Default_Screen_Resolution(class UObject* __WorldContext, struct FIntPoint* Resolution__X_and_Y_, const struct FIntPoint& K2Node_MakeStruct_IntPoint, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "Get Default Screen Resolution");

	Params::UPhotoModeFunctionLibrary_C_Get_Default_Screen_Resolution_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Resolution__X_and_Y_ != nullptr)
		*Resolution__X_and_Y_ = std::move(Parms.Resolution__X_and_Y_);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.HighResScreenshot (without UI)
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     World_Context_Object__Self_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Player_Controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Screenshot_Folder_Path                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                   Resolution__X_and_Y_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Full_Photo_Path                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Photo_Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Resolution                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      FullFilePath                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     WorldContextObject                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      FolderPath                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeDirectoryName_OutPath                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_7                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EndsWith_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::HighResScreenshot__without_UI_(class UObject* World_Context_Object__Self_, class APlayerController* Player_Controller, const class FString& Screenshot_Folder_Path, const struct FIntPoint& Resolution__X_and_Y_, class UObject* __WorldContext, class FString* Full_Photo_Path, class FString* Photo_Name, const class FString& Resolution, const class FString& FullFilePath, class UObject* WorldContextObject, const class FString& FolderPath, class APlayerController* PlayerController, const class FString& CallFunc_GetBaseFilename_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_NormalizeDirectoryName_OutPath, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FDateTime& CallFunc_Now_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, bool CallFunc_EndsWith_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "HighResScreenshot (without UI)");

	Params::UPhotoModeFunctionLibrary_C_HighResScreenshot__without_UI__Params Parms{};

	Parms.World_Context_Object__Self_ = World_Context_Object__Self_;
	Parms.Player_Controller = Player_Controller;
	Parms.Screenshot_Folder_Path = Screenshot_Folder_Path;
	Parms.Resolution__X_and_Y_ = Resolution__X_and_Y_;
	Parms.__WorldContext = __WorldContext;
	Parms.Resolution = Resolution;
	Parms.FullFilePath = FullFilePath;
	Parms.WorldContextObject = WorldContextObject;
	Parms.FolderPath = FolderPath;
	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_NormalizeDirectoryName_OutPath = CallFunc_NormalizeDirectoryName_OutPath;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue_6 = CallFunc_Conv_IntToString_ReturnValue_6;
	Parms.CallFunc_Conv_IntToString_ReturnValue_7 = CallFunc_Conv_IntToString_ReturnValue_7;
	Parms.CallFunc_EndsWith_ReturnValue = CallFunc_EndsWith_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

	if (Full_Photo_Path != nullptr)
		*Full_Photo_Path = std::move(Parms.Full_Photo_Path);

	if (Photo_Name != nullptr)
		*Photo_Name = std::move(Parms.Photo_Name);

}


// Function PhotoModeFunctionLibrary.PhotoModeFunctionLibrary_C.Screenshot (with UI)
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     World_Context_Object__Self_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Player_Controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Screenshot_Folder_Path                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Full_Screenshot_File_Path                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PhotoName                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      FullFilePath                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              ScreenshotNumber                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     WorldContextObject                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      FolderPath                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeDirectoryName_OutPath                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EndsWith_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeFunctionLibrary_C::Screenshot__with_UI_(class UObject* World_Context_Object__Self_, class APlayerController* Player_Controller, const class FString& Screenshot_Folder_Path, class UObject* __WorldContext, class FString* Full_Screenshot_File_Path, class FString* PhotoName, const class FString& FullFilePath, int32 ScreenshotNumber, class UObject* WorldContextObject, const class FString& FolderPath, class APlayerController* PlayerController, const class FString& CallFunc_NormalizeDirectoryName_OutPath, const class FString& CallFunc_GetBaseFilename_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, bool CallFunc_EndsWith_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeFunctionLibrary_C", "Screenshot (with UI)");

	Params::UPhotoModeFunctionLibrary_C_Screenshot__with_UI__Params Parms{};

	Parms.World_Context_Object__Self_ = World_Context_Object__Self_;
	Parms.Player_Controller = Player_Controller;
	Parms.Screenshot_Folder_Path = Screenshot_Folder_Path;
	Parms.__WorldContext = __WorldContext;
	Parms.FullFilePath = FullFilePath;
	Parms.ScreenshotNumber = ScreenshotNumber;
	Parms.WorldContextObject = WorldContextObject;
	Parms.FolderPath = FolderPath;
	Parms.PlayerController = PlayerController;
	Parms.CallFunc_NormalizeDirectoryName_OutPath = CallFunc_NormalizeDirectoryName_OutPath;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_EndsWith_ReturnValue = CallFunc_EndsWith_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;

	UObject::ProcessEvent(Func, &Parms);

	if (Full_Screenshot_File_Path != nullptr)
		*Full_Screenshot_File_Path = std::move(Parms.Full_Screenshot_File_Path);

	if (PhotoName != nullptr)
		*PhotoName = std::move(Parms.PhotoName);

}

}


