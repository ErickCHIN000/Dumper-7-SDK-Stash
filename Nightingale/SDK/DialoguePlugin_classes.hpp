#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class DialoguePlugin.DialogueEvents
class UDialogueEvents : public UObject
{
public:
	uint8                                        Pad_D6E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueEvents* GetDefaultObj();

	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NpcActor, class UObject* SenderContextObject);
};

// 0x0 (0x28 - 0x28)
// Class DialoguePlugin.DialogueConditions
class UDialogueConditions : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDialogueConditions* GetDefaultObj();

	bool IsConditionMet_Internal(class APlayerController* ConsideringPlayer, class AActor* NpcActor);
	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NpcActor);
};

// 0x10 (0x38 - 0x28)
// Class DialoguePlugin.OrCondition
class UOrCondition : public UDialogueConditions
{
public:
	TArray<class UDialogueConditions*>           OrConditions;                                      // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOrCondition* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DialoguePlugin.AndCondition
class UAndCondition : public UDialogueConditions
{
public:
	TArray<class UDialogueConditions*>           AndConditions;                                     // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAndCondition* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class DialoguePlugin.Dialogue
class UDialogue : public UDataAsset
{
public:
	bool                                         DisplayIdleSplines;                                // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          SpeakerNames;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UDialogueNodeBase*>             DialogueNodes;                                     // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        NextNodeId;                                        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UGameInstance>          PersistentGameInstance;                            // 0x5C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F01[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogue* GetDefaultObj();

	bool GetTextForId(int32 NodeId, class FText* OutText);
	bool GetSpeakerNameForId(int32 NodeId, class FText* OutText);
	TArray<class UDialogueNodeBase*> GetNextNodes(class UDialogueNodeBase* Node);
	class UDialogueNodeBase* GetFirstNode();
	class FText GetFirstAccessibleSpeakerName(class APlayerController* PlayerController, class AActor* NPC);
	void CleanOuter();
	void CallFunctionByName(class UObject* Object, const class FString& FunctionName);
	void AssignPersistentOuter(class UGameInstance* InGameInstance);
};

// 0x88 (0xB0 - 0x28)
// Class DialoguePlugin.DialogueNodeBase
class UDialogueNodeBase : public UObject
{
public:
	int32                                        ID;                                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F24[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<int32>                                Links;                                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Coordinates;                                       // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogueEvents*>               Events;                                            // 0x68(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDialogueConditions*>           Conditions;                                        // 0x78(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                BubbleComment;                                     // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawBubbleComment;                                // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F36[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         SpeechEvent;                                       // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowEventsAndConditions;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F39[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueNodeBase* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class DialoguePlugin.DialogueNodeSpeaker
class UDialogueNodeSpeaker : public UDialogueNodeBase
{
public:
	int32                                        SpeakerId;                                         // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F59[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueNodeSpeaker* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class DialoguePlugin.DialogueNodePlayer
class UDialogueNodePlayer : public UDialogueNodeBase
{
public:
	enum class EDialogueMarkup                   Markup;                                            // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueNodePlayer* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class DialoguePlugin.DialogueNodeHub
class UDialogueNodeHub : public UDialogueNodeSpeaker
{
public:
	int32                                        PreviousNodeLink;                                  // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueNodeHub* GetDefaultObj();

};

// 0x8 (0x2C8 - 0x2C0)
// Class DialoguePlugin.DialogueUserWidget
class UDialogueUserWidget : public UUserWidget
{
public:
	class AActor*                                NpcActor;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogueUserWidget* GetDefaultObj();

	bool RunStringReplacer(const class FString& OriginalString, class FString* ResultString);
	void RunEventsForNode(class UDialogueNodeBase* Node);
	class FText ReplaceVarStrings(class FText& InText);
	bool IsConditionsMetForNode(class UDialogueNodeBase* Node);
	TArray<class FString> FindVarStrings(class FText InText);
};

}


