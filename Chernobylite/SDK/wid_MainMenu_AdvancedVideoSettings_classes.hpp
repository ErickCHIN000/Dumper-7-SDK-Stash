#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17D (0x3DD - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_AdvancedVideoSettings.wid_MainMenu_AdvancedVideoSettings_C
class UWid_MainMenu_AdvancedVideoSettings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_graphics_Option_C*       AntialiasingQuality;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       AntiAliasingType;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_menu_Benchmark_button_C*          BenchmarkButton;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Bloom;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons3_C*              Buttons;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       ChromaticAberation;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       ContactShadows;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       DepthOfField;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       DLSS;                                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Volume_Option_C*         DrawDist;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Effects;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       FoliageQuality;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       FSR;                                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       FSR2;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Volume_Option_C*         FSR2Sharpness;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Geometry;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       LensFlare;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       MotionBlur;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           Popup;                                             // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       RayTracing;                                        // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Volume_Option_C*         ResolutionScale;                                   // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            SettingsScroll;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Shadows;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Tessellation;                                      // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Textures;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ContinueDelegate;                                  // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NewDeletage;                                       // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExitDelegate;                                      // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_MainMenu_Video_Options_C*         VideoOptionsMenu;                                  // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInputEnabled;                                    // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LoadedFoliageValue;                                // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBenchmarkPopupVisible;                           // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2141[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoadedDrawDistance;                                // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SetDrawDistanceQualityToDefault;                   // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultDrawDistance;                               // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EUDLSSMode>                SupportedDLSSModes;                                // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWid_MainMenu_VideoSettings_C*         VideoSettingsReference;                            // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<float>                                LoadedSettingsArray;                               // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EAntiAliasingType                 LastAAPreFSRChange;                                // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2153[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastMeshCausticsValue;                             // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastWaterCausticsValue;                            // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewVar_0;                                          // 0x3DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_AdvancedVideoSettings_C* GetDefaultObj();

	void OnFSR2SharpnessChanged(float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnFSR2ValueChanged(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_4, int32 CallFunc_GetEntryIndex_EntryIndex_4);
	enum class ESlateVisibility Get_FSR2_Visibility_0(bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue);
	enum class ESlateVisibility Get_FSR_Visibility_0(bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue);
	void DisableRTXInterfaceOnNonDX12(const TArray<class UWid_MainMenu_graphics_Option_C*>& EntriesToDisable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWid_MainMenu_graphics_Option_C*>& K2Node_MakeArray_Array, class UWid_MainMenu_graphics_Option_C* CallFunc_Array_Get_Item, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue);
	void OnFSRValueChanged(uint8 CallFunc_GetValidValue_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void CacheSettingsArray(TArray<float>& CallFunc_Get_Settings_Array_Array);
	void SetupEventForApplyButton(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnResolutionValueChanged(float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetupClamping(const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_1, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_1, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_2, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_2, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_3, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_3, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_4, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_4, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp_5, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp_5);
	void UpdateSupportedDLSS(enum class EUDLSSMode Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, enum class EUDLSSMode CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_BooleanOR_ReturnValue, TArray<enum class EUDLSSMode>& CallFunc_GetSupportedDLSSModes_ReturnValue);
	void OnAntialiasingTypeChanged(enum class EAntiAliasingType NewLocalVar_0, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void GetViewDistanceBasedOnQualityLevel(int32 NewParam, float* DrawDistance, bool CachedCustomDrawDistanceEnabled, float DrawDistanceForValue, int32 CachedViewDistanceQuality, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_GetCustomDrawDistanceEnabled_ReturnValue, float CallFunc_GetDrawDistanceValue_ReturnValue);
	void OnPopupConfirmed();
	void ShowResetPopup(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void OnDrawDistanceChanged(float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ShowLoadingScreen(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UWid_LoadingScreen_C* CallFunc_Create_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue);
	void DisableInput();
	void Get_Settings_Array(TArray<float>* Array, const TArray<float>& SettingsArray, float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_GetValueWithinMinMax_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_Conv_IntToFloat_ReturnValue_8, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10, float CallFunc_Conv_IntToFloat_ReturnValue_9, float CallFunc_Conv_IntToFloat_ReturnValue_10, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12, float CallFunc_Conv_IntToFloat_ReturnValue_11, float CallFunc_Conv_IntToFloat_ReturnValue_12, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14, float CallFunc_Conv_IntToFloat_ReturnValue_13, float CallFunc_Conv_IntToFloat_ReturnValue_14, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16, float CallFunc_Conv_IntToFloat_ReturnValue_15, float CallFunc_Conv_IntToFloat_ReturnValue_16, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, int32 CallFunc_Array_Add_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_18, int32 CallFunc_Array_Add_ReturnValue_19, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18, float CallFunc_Conv_IntToFloat_ReturnValue_18, bool CallFunc_IsDLSSSupported_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_20, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19, float CallFunc_Conv_IntToFloat_ReturnValue_19, float CallFunc_GetValueWithinMinMax_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_21, int32 CallFunc_Array_Add_ReturnValue_22);
	void On_CAS_Scaling_Changed();
	void OnDLSSValueChanged(bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_4, int32 CallFunc_GetEntryIndex_EntryIndex_4);
	void Close_Advanced_Video_Settings();
	void Hide_Popup();
	void Show_Benchmark_Popup(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput);
	void Is_Popup_Visible(bool* Is_Visible, bool CallFunc_IsVisible_ReturnValue);
	void Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12);
	void Capitalize_Options_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Save_And_Apply_Settings(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_IsDLSSSupported_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, bool CallFunc_Not_PreBool_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_6, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, float CallFunc_GetValueWithinMinMax_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_7, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_8, bool CallFunc_Conv_IntToBool_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_8, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_9, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_10, uint8 CallFunc_GetValidValue_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_9, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_11, bool CallFunc_GetCustomDrawDistanceEnabled_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_4, float CallFunc_GetValueWithinMinMax_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_10, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_11, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_12, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_13, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_14, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_12, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_13, bool CallFunc_Conv_IntToBool_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_14, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_15, bool CallFunc_Conv_IntToBool_ReturnValue_4, bool CallFunc_Conv_IntToBool_ReturnValue_5, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_16, float CallFunc_GetValueWithinMinMax_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_15, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_17, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_18, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_19, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_20, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_16, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_17, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_18, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_19, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_21, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_20);
	void Load_Settings(bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, bool CallFunc_GetIsDX12GraphicsRHI_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetRTSetting_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EUDLSSMode CallFunc_GetDLSSMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsDLSSSupported_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, float CallFunc_GetScreenPercentage_ReturnValue, bool CallFunc_GetContactShadowsEnabled_ReturnValue, float CallFunc_GetFsr2Sharpness_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_GetIsDisplacementEnabled_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_GetIsDisplacementEnabled_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, enum class EAntiAliasingType CallFunc_GetAntiAliasingType_ReturnValue, float CallFunc_GetDrawDistanceValue_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, bool CallFunc_GetDepthOfFieldEnabled_ReturnValue, bool CallFunc_GetMotionBlurEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, bool CallFunc_GetBloomEnabled_ReturnValue, bool CallFunc_GetChromaticAberationEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool CallFunc_GetLensFlareEnabled_ReturnValue, int32 CallFunc_GetGeometryQuality_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue);
	void Setup_Selectable_Manager(bool CallFunc_IsDLSSSupported_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_IsFSREnabled_ReturnValue, enum class EUDLSSMode CallFunc_GetDLSSMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_1, int32 CallFunc_GetEntryIndex_EntryIndex_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_2, int32 CallFunc_GetEntryIndex_EntryIndex_2, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput_3, int32 CallFunc_GetEntryIndex_EntryIndex_3, TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void Reset_To_Defaults(int32 DefaultGraphicsValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_GetViewDistanceBasedOnQualityLevel_DrawDistance, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool CallFunc_Is_Popup_Visible_Is_Visible);
	void PlayUIMoveSound();
	void PreConstruct(bool IsDesignTime);
	void BackBtn();
	void Up();
	void Down();
	void Accept();
	void Left();
	void Right();
	void Construct();
	void Benchmark();
	void Bench();
	void SetDefault();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RightReleased();
	void LeftRelesed();
	void UpdateApplyButton();
	void ExecuteUbergraph_wid_MainMenu_AdvancedVideoSettings(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_Is_Popup_Visible_Is_Visible, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Is_Popup_Visible_Is_Visible_1, bool CallFunc_Is_Popup_Visible_Is_Visible_2, bool CallFunc_Is_Popup_Visible_Is_Visible_3, bool CallFunc_Is_Popup_Visible_Is_Visible_4, bool CallFunc_Is_Popup_Visible_Is_Visible_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_Is_Popup_Visible_Is_Visible_6, FDelegateProperty_ Temp_delegate_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEvent_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<float>& CallFunc_Get_Settings_Array_Array, bool CallFunc_CompareFloatArray_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess_1);
	void ExitDelegate__DelegateSignature();
	void NewDeletage__DelegateSignature();
	void ContinueDelegate__DelegateSignature();
};

}


