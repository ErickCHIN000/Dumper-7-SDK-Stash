#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x3E8 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Extras.wid_MainMenu_Extras_C
class UWid_MainMenu_Extras_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_graphics_Option_C*       AK47Skin;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       BlasterSkin;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons2_C*              Buttons;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       CharactersSkin;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       CrossbowSkin;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       DecorationsSkin;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       KnifeSkin;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       MakarovSkin;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       MP133Skin;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       NagantSkin;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       OthersSkin;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       RailgunSkin;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                          AK47SkinData;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EDLCType, class FText>       DLCNames;                                          // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          NagantSkinData;                                    // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          BlasterSkinData;                                   // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          MP133SkinData;                                     // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          RailgunSkinData;                                   // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          CrossbowSkinData;                                  // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          KnifeSkinData;                                     // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          DecorationsSkinData;                               // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          CharactersSkinData;                                // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          OthersSkinData;                                    // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          MakarovSkinData;                                   // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Extras_C* GetDefaultObj();

	void OnMakarovSkinChanged(int32 DLCOption);
	void OnOthersSkinChanged(int32 DLCOption);
	void OnCharactersSkinChanged(int32 DLCOption);
	void OnDecorationSkinChanged(int32 DLCOption);
	void SaveGlobalSkin(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EGlobalSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FWeaponSkinInfo>& AvailableSkins, const TArray<class FText>& Data, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void PopulateGlobalSkinData(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EGlobalSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FGlobalSkinInfo>& AllAvailableSkins, const TArray<class FText>& Data, class FText Temp_text_Variable, class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGlobalSkinInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectableIndex_Target_CastInput, int32 CallFunc_GetSelectableIndex_EntryIndex, TArray<class FText>& K2Node_MakeArray_Array, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class FName CallFunc_GetGlobalSkinType_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Add_ReturnValue_3, TArray<struct FGlobalSkinInfo>& CallFunc_K2_GetAvailableGlobalSkinsForType_ReturnValue);
	void OnCrossbowSkinChanged(int32 DLCOption);
	void OnRailgunSkinChanged(int32 DLCOption);
	void OnBlasterSkinChanged(int32 DLCOption);
	void OnAK47SkinChagned(int32 DLCOption);
	void OnMP133SkinChagned(int32 DLCOption);
	void OnWheellockPistolSkinChanged(int32 DLCOption);
	void OnKnifeSkinChanged(int32 DLCOption);
	void SaveWeaponSkin(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EWeaponSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FWeaponSkinInfo>& AvailableSkins, const TArray<class FText>& Data, int32 CallFunc_Array_Length_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_Greater_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class ACGWeapon* K2Node_DynamicCast_AsCGWeapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, enum class EWeaponSkinType CallFunc_ItemIdToWeaponSkinType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PopulateAllSkinsData();
	void GetDLCName(enum class EDLCType& Key, class FText* Value, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void PopulateWeaponSkinData(class UWid_MainMenu_graphics_Option_C* SkinWidget, enum class EWeaponSkinType SkinType, TArray<class FName>& SkinDataRef, const TArray<struct FWeaponSkinInfo>& AvailableSkins, const TArray<class FText>& Data, class FText Temp_text_Variable, class FName Temp_name_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectableIndex_Target_CastInput, int32 CallFunc_GetSelectableIndex_EntryIndex, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class FName CallFunc_GetWeaponSkin_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FWeaponSkinInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetDLCName_Value, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<struct FWeaponSkinInfo>& CallFunc_K2_GetAvailableWeaponSkinsForType_ReturnValue);
	void GetSelectableIndex(TScriptInterface<class ISelectableEntryInterace_C> Target, int32* EntryIndex, int32 CallFunc_GetEntryIndex_EntryIndex);
	void SetupLabel(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_FormatText_Output);
	void Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12);
	void Load_Settings();
	void Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void Close();
	void Set_Default_Values();
	void PreConstruct(bool IsDesignTime);
	void SetDefault();
	void Up();
	void Down();
	void Left();
	void Right();
	void BackPressed();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_wid_MainMenu_Extras(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


