//
//  XcodeUtils.h
//  XVim2
//
//  Created by Ant on 09/10/2017.
//  Copyright © 2017 Shuichiro Suzuki. All rights reserved.
//

#import <DVTFoundation/DVTTextPreferences.h>
#import <DVTFoundation/DVTDocumentLocation.h>
#import <Foundation/Foundation.h>
#import <IDEKit/IDEEditorArea.h>
#import <IDEKit/IDEEditorContext.h>
#import <IDEKit/IDEEditorOpenSpecifier.h>
#import <IDEKit/IDEWorkspaceTabController.h>
#import <IDEKit/IDEWorkspaceWindow.h>
#import <IDEKit/IDEWorkspaceWindowController.h>
#import <IDESourceEditor/_TtC15IDESourceEditor19IDESourceEditorView.h>

@class IDEWorkspaceWindow;
@class IDEWorkspaceWindowController;
@class IDEWorkspaceTabController_XVim;
@class IDEEditorArea;
@class IDENavigableItem;
@class IDEEditorOpenSpecifier;
@class SourceEditorViewProxy;

IDEWorkspaceWindowController* XVimLastActiveWindowController(void);
IDEWorkspaceTabController_XVim* XVimLastActiveWorkspaceTabController(void);
IDEEditorArea* XVimLastActiveEditorArea(void);
BOOL XVimOpenDocumentAtPath(NSString* path);
IDEEditorOpenSpecifier* XVimOpenSpecifier(IDENavigableItem* item, id locationToSelect);
_TtC15IDESourceEditor19IDESourceEditorView* XVimLastActiveEditorView(void);
SourceEditorViewProxy* XVimLastActiveSourceView(void);

static inline Class IDEEditorOpenSpecifierClass() { return NSClassFromString(@"IDEEditorOpenSpecifier"); }
static inline Class DVTDocumentLocationClass() { return NSClassFromString(@"DVTDocumentLocation"); }
static inline Class IDEWorkspaceWindowClass() { return NSClassFromString(@"IDEWorkspaceWindow"); }
static inline Class DVTTextPreferencesClass() { return NSClassFromString(@"DVTTextPreferences"); }
static inline Class IDEEditorCoordinatorClass() { return NSClassFromString(@"IDEEditorCoordinator"); }
static inline Class IDEEditorAreaClass() { return NSClassFromString(@"IDEEditorArea"); }
