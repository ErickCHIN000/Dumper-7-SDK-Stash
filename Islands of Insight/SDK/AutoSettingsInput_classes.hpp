#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// Class AutoSettingsInput.InputLabel
class UInputLabel : public UUserWidget
{
public:
	int32                                        MappingGroup;                                      // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x264(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerKeyGroup;                                // 0x26C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 IconTags;                                          // 0x270(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputLabel* GetDefaultObj();

	void UpdateLabel();
	void MappingsChanged(class APlayerController* Player);
};

// 0x68 (0x2F8 - 0x290)
// Class AutoSettingsInput.ActionLabel
class UActionLabel : public UInputLabel
{
public:
	class FName                                  ActionName;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UKeyLabel>                 KeyLabelWidgetClass;                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   KeySeparatorWidgetClass;                           // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                          KeyContainer;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKeyLabel*                             PrimaryKeyLabel;                                   // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             ShiftLabel;                                        // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             CtrlLabel;                                         // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             AltLabel;                                          // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKeyLabel*                             CmdLabel;                                          // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               ShiftSeparator;                                    // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               CtrlSeparator;                                     // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               AltSeparator;                                      // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               CmdSeparator;                                      // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UActionLabel* GetDefaultObj();

};

// 0x98 (0x2F8 - 0x260)
// Class AutoSettingsInput.InputMapping
class UInputMapping : public UUserWidget
{
public:
	TMap<class FName, class FText>               ActionAxisNameToLabelMap;                          // 0x260(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          KeyGroup;                                          // 0x2B4(0x8)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_133[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 IconTags;                                          // 0x2C0(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UBindCaptureButton*                    BindCaptureButton;                                 // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputCollisionWidget*                 InputCollisionWidget;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UInputCollisionWidget>     InputCollisionWidgetClass;                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInputMapping* GetDefaultObj();

	void UpdateMapping();
	void UpdateLabel();
	void ChordCaptured(const struct FCapturedInput& CapturedInput);
	void BindChord(const struct FCapturedInput& CapturedInput);
};

// 0x18 (0x310 - 0x2F8)
// Class AutoSettingsInput.ActionMapping
class UActionMapping : public UInputMapping
{
public:
	class FName                                  ActionName;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PreventUnmapping;                                  // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionLabel*                          ActionLabel;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UActionMapping* GetDefaultObj();

	void PreventUnmappingIfNeeded();
};

// 0x150 (0x188 - 0x38)
// Class AutoSettingsInput.AutoSettingsInputConfig
class UAutoSettingsInputConfig : public UDeveloperSettings
{
public:
	uint8                                        Pad_13B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bAutoInitializePlayerInputOverrides;               // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowModifierKeys;                                 // 0x41(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShiftModifierOverrideText;                         // 0x48(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  CtrlModifierOverrideText;                          // 0x60(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  AltModifierOverrideText;                           // 0x78(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  CmdModifierOverrideText;                           // 0x90(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FInputMappingPreset>           InputPresets;                                      // 0xA8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         AllowMultipleBindingsPerKey;                       // 0xB8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_144[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_168[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

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

// 0x18 (0x2A8 - 0x290)
// Class AutoSettingsInput.AxisLabel
class UAxisLabel : public UInputLabel
{
public:
	class FName                                  AxisName;                                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UKeyLabel*                             KeyLabel;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

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
	uint8                                        Pad_196[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAxisLabel*                            AxisLabel;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAxisMapping* GetDefaultObj();

};

// 0x30 (0x290 - 0x260)
// Class AutoSettingsInput.BindCaptureButton
class UBindCaptureButton : public UUserWidget
{
public:
	struct FGameplayTag                          KeyGroup;                                          // 0x260(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UBindCapturePrompt>        BindCapturePromptClass;                            // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CapturePromptZOrder;                               // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindCapturePrompt*                    Prompt;                                            // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBindCaptureButton* GetDefaultObj();

	class UBindCapturePrompt* StartCapture();
	void InitializePrompt(class UBindCapturePrompt* PromptWidget);
	void ChordCaptured(const struct FCapturedInput& CapturedInput);
};

// 0x60 (0x2C0 - 0x260)
// Class AutoSettingsInput.BindCapturePrompt
class UBindCapturePrompt : public UUserWidget
{
public:
	bool                                         bIgnoreGameViewportInputWhileCapturing;            // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictKeyGroup;                                 // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBindingCaptureMode               CaptureMode;                                       // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          KeyGroup;                                          // 0x264(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChordCaptured;                                   // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChordRejected;                                   // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCapturePromptClosed;                             // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          KeysDown;                                          // 0x2A0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         PreviousIgnoreInput;                               // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             AccumulatedMouseDelta;                             // 0x2B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

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

// 0xD0 (0x330 - 0x260)
// Class AutoSettingsInput.InputCollisionWidget
class UInputCollisionWidget : public UUserWidget
{
public:
	class FText                                  CollisionKeyName;                                  // 0x260(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  CollisionInputName;                                // 0x278(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_236[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputCollisionWidget* GetDefaultObj();

	void KeepCollisions();
	void EraseCollisions();
	void ClosePrompt();
};

// 0x30 (0x58 - 0x28)
// Class AutoSettingsInput.InputMappingManager
class UInputMappingManager : public UObject
{
public:
	uint8                                        Pad_346[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlayerInputMappings>          PlayerInputOverrides;                              // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<class APlayerController*>             RegisteredPlayerControllers;                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UInputMappingManager* GetDefaultObj();

	void SetPlayerKeyGroupStatic(class APlayerController* Player, const struct FGameplayTag& KeyGroup);
	void SetPlayerInputPresetStatic(class APlayerController* Player, const struct FInputMappingPreset& Preset);
	void SetPlayerInputPresetByTag(class APlayerController* Player, const struct FGameplayTag& PresetTag);
	void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor);
	bool InitializePlayerInputOverridesStatic(class APlayerController* Player);
	struct FPlayerInputMappings GetPlayerInputMappingsStatic(class APlayerController* Player);
	struct FInputAxisKeyMapping GetPlayerAxisMappingStatic(class APlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup);
	struct FInputActionKeyMapping GetPlayerActionMappingStatic(class APlayerController* Player, class FName ActionName, int32 MappingGroup);
	TArray<struct FInputMappingPreset> GetDefaultInputPresets();
	void AddPlayerAxisOverrideStatic(class APlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerAxisOverride(class APlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerActionOverrideStatic(class APlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
	void AddPlayerActionOverride(class APlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup);
};

// 0x70 (0x2D0 - 0x260)
// Class AutoSettingsInput.KeyLabel
class UKeyLabel : public UUserWidget
{
public:
	class FText                                  KeyInvalidText;                                    // 0x260(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LabelOverride;                                     // 0x278(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x290(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 IconTags;                                          // 0x2B0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

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


