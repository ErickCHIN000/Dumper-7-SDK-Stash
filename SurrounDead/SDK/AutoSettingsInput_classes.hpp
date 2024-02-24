#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// Class AutoSettingsInput.InputLabel
class UInputLabel : public UUserWidget
{
public:
	int32                                        MappingGroup;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x2C4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerKeyGroup;                                // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 IconTags;                                          // 0x2D0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputLabel* GetDefaultObj();

	void UpdateLabel();
	void MappingsChanged(class APlayerController* Player);
};

// 0x68 (0x358 - 0x2F0)
// Class AutoSettingsInput.ActionLabel
class UActionLabel : public UInputLabel
{
public:
	class FName                                  ActionName;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UKeyLabel>                 KeyLabelWidgetClass;                               // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   KeySeparatorWidgetClass;                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                          KeyContainer;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKeyLabel*                             PrimaryKeyLabel;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             ShiftLabel;                                        // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             CtrlLabel;                                         // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             AltLabel;                                          // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             CmdLabel;                                          // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               ShiftSeparator;                                    // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               CtrlSeparator;                                     // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               AltSeparator;                                      // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               CmdSeparator;                                      // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UActionLabel* GetDefaultObj();

};

// 0x38 (0x2F8 - 0x2C0)
// Class AutoSettingsInput.InputMapping
class UInputMapping : public UUserWidget
{
public:
	int32                                        MappingGroup;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          KeyGroup;                                          // 0x2C4(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BA1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 IconTags;                                          // 0x2D0(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UBindCaptureButton*                    BindCaptureButton;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInputMapping* GetDefaultObj();

	void UpdateMapping();
	void UpdateLabel();
	void ChordCaptured(const struct FCapturedInput& CapturedInput);
	void BindChord(const struct FCapturedInput& CapturedInput);
};

// 0x10 (0x308 - 0x2F8)
// Class AutoSettingsInput.ActionMapping
class UActionMapping : public UInputMapping
{
public:
	class FName                                  ActionName;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActionLabel*                          ActionLabel;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UActionMapping* GetDefaultObj();

};

// 0x150 (0x188 - 0x38)
// Class AutoSettingsInput.AutoSettingsInputConfig
class UAutoSettingsInputConfig : public UDeveloperSettings
{
public:
	uint8                                        Pad_BC7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoInitializePlayerInputOverrides;               // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowModifierKeys;                                 // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShiftModifierOverrideText;                         // 0x48(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  CtrlModifierOverrideText;                          // 0x60(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  AltModifierOverrideText;                           // 0x78(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  CmdModifierOverrideText;                           // 0x90(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FInputMappingPreset>           InputPresets;                                      // 0xA8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         AllowMultipleBindingsPerKey;                       // 0xB8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMappingGroupLink>             MappingGroupLinks;                                 // 0xC0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          PreservedActions;                                  // 0xD0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          PreservedAxes;                                     // 0xE0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyIconSet>                   KeyIconSets;                                       // 0xF0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyFriendlyName>              KeyFriendlyNames;                                  // 0x100(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyGroup>                     KeyGroups;                                         // 0x110(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          AllowedKeys;                                       // 0x120(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          DisallowedKeys;                                    // 0x130(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          BindingEscapeKeys;                                 // 0x140(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                        MouseMoveCaptureDistance;                          // 0x150(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisAssociation>              AxisAssociations;                                  // 0x158(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          BlacklistedActions;                                // 0x168(0x10)(ZeroConstructor, Config, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          BlacklistedAxes;                                   // 0x178(0x10)(ZeroConstructor, Config, Deprecated, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAutoSettingsInputConfig* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AutoSettingsInput.AutoSettingsInputConfigInterface
class IAutoSettingsInputConfigInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAutoSettingsInputConfigInterface* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class AutoSettingsInput.AutoSettingsInputProjectConfig
class UAutoSettingsInputProjectConfig : public UAutoSettingsInputConfig
{
public:

	static class UClass* StaticClass();
	static class UAutoSettingsInputProjectConfig* GetDefaultObj();

	TArray<class UTexture*> LoadKeyIcons(const struct FGameplayTagContainer& KeyIconTags);
	struct FGameplayTag GetKeyGroupStatic(const struct FKey& Key);
	class FText GetKeyFriendlyNameStatic(const struct FKey& Key);
};

// 0x8 (0x38 - 0x30)
// Class AutoSettingsInput.AutoSettingsInputSubsystem
class UAutoSettingsInputSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_C5C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAutoSettingsInputSubsystem* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AutoSettingsInput.AutoSettingsInputValidationSubsystem
class UAutoSettingsInputValidationSubsystem : public UGameInstanceSubsystem
{
public:

	static class UClass* StaticClass();
	static class UAutoSettingsInputValidationSubsystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AutoSettingsInput.AutoSettingsPlayer
class IAutoSettingsPlayer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAutoSettingsPlayer* GetDefaultObj();

	void SaveInputMappings(const struct FPlayerInputMappings& InputMappings);
	class FString GetUniquePlayerIdentifier();
	bool GetInputMappings(struct FPlayerInputMappings* InputMappings);
	struct FInputMappingPreset GetDefaultInputMappingPreset();
};

// 0x18 (0x308 - 0x2F0)
// Class AutoSettingsInput.AxisLabel
class UAxisLabel : public UInputLabel
{
public:
	class FName                                  AxisName;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UKeyLabel*                             KeyLabel;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAxisLabel* GetDefaultObj();

};

// 0x18 (0x310 - 0x2F8)
// Class AutoSettingsInput.AxisMapping
class UAxisMapping : public UInputMapping
{
public:
	class FName                                  AxisName;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAxisLabel*                            AxisLabel;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAxisMapping* GetDefaultObj();

};

// 0x30 (0x2F0 - 0x2C0)
// Class AutoSettingsInput.BindCaptureButton
class UBindCaptureButton : public UUserWidget
{
public:
	struct FGameplayTag                          KeyGroup;                                          // 0x2C0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UBindCapturePrompt>        BindCapturePromptClass;                            // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CapturePromptZOrder;                               // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D13[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindCapturePrompt*                    Prompt;                                            // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBindCaptureButton* GetDefaultObj();

	class UBindCapturePrompt* StartCapture();
	void InitializePrompt(class UBindCapturePrompt* PromptWidget);
	void ChordCaptured(const struct FCapturedInput& CapturedInput);
};

// 0x68 (0x328 - 0x2C0)
// Class AutoSettingsInput.BindCapturePrompt
class UBindCapturePrompt : public UUserWidget
{
public:
	bool                                         bIgnoreGameViewportInputWhileCapturing;            // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictKeyGroup;                                 // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBindingCaptureMode               CaptureMode;                                       // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D62[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          KeyGroup;                                          // 0x2C4(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChordCaptured;                                   // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChordRejected;                                   // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCapturePromptClosed;                             // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          KeysDown;                                          // 0x300(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         PreviousIgnoreInput;                               // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D6F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             AccumulatedMouseDelta;                             // 0x318(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBindCapturePrompt* GetDefaultObj();

	bool IsKeyAllowed(const struct FKey& PrimaryKey);
	struct FGameplayTag GetKeyGroup();
	void Cancel();
};

// 0x30 (0x58 - 0x28)
// Class AutoSettingsInput.GlobalKeyIconTagManager
class UGlobalKeyIconTagManager : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnGlobalKeyIconTagsModified;                       // 0x28(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GlobalKeyIconTags;                                 // 0x38(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGlobalKeyIconTagManager* GetDefaultObj();

	void SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags);
	class UTexture* GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags, float AxisScale);
};

// 0x30 (0x60 - 0x30)
// Class AutoSettingsInput.InputMappingManager
class UInputMappingManager : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnMappingsChanged;                                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FPlayerInputMappings>          PlayerInputOverrides;                              // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class APlayerController*>             RegisteredPlayerControllers;                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UInputMappingManager* GetDefaultObj();

	void SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup);
	void SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset);
	void SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag);
	void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor);
	bool InitializePlayerInputOverridesStatic(class APlayerController* Player);
	void GetPlayerMappingsByKey(class APlayerController* Player, const struct FKey& Key, TArray<struct FInputActionKeyMapping>* Actions, TArray<struct FInputAxisKeyMapping>* Axes);
	struct FPlayerInputMappings GetPlayerInputMappingsStatic(class APlayerController* Player);
	struct FInputAxisKeyMapping GetPlayerAxisMappingStatic(class APlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup);
	TArray<struct FInputAxisKeyMapping> GetPlayerAxisMappings(class APlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	struct FInputAxisKeyMapping GetPlayerAxisMapping(class APlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	struct FInputActionKeyMapping GetPlayerActionMappingStatic(class APlayerController* Player, class FName ActionName, int32 MappingGroup);
	TArray<struct FInputActionKeyMapping> GetPlayerActionMappings(class APlayerController* Player, class FName ActionName, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	struct FInputActionKeyMapping GetPlayerActionMapping(class APlayerController* Player, class FName ActionName, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup);
	TArray<struct FInputMappingPreset> GetDefaultInputPresets();
	void AddPlayerAxisOverrideStatic(class APlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerAxisOverride(class APlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerActionOverrideStatic(class APlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerActionOverride(class APlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
};

// 0x70 (0x330 - 0x2C0)
// Class AutoSettingsInput.KeyLabel
class UKeyLabel : public UUserWidget
{
public:
	class FText                                  KeyInvalidText;                                    // 0x2C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LabelOverride;                                     // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x2F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x308(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F62[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 IconTags;                                          // 0x310(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKeyLabel* GetDefaultObj();

	void UpdateKeyLabel();
	void OnGlobalKeyIconTagsModified();
	bool HasValidKey();
	bool HasIcon();
	enum class ESlateVisibility GetIconVisibility();
	struct FSlateBrush GetIconBrush();
	class UTexture* GetIcon();
	enum class ESlateVisibility GetDisplayNameVisibility();
	class FText GetDisplayName();
};

}


